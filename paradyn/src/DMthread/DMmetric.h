/*
 * Copyright (c) 1993, 1994 Barton P. Miller, Jeff Hollingsworth,
 *     Bruce Irvin, Jon Cargille, Krishna Kunchithapadam, Karen
 *     Karavanic, Tia Newhall, Mark Callaghan.  All rights reserved.
 *
 * This software is furnished under the condition that it may not be
 * provided or otherwise made available to, or used by, any other
 * person, except as provided for by the terms of applicable license
 * agreements.  No title to or ownership of the software is hereby
 * transferred.  The name of the principals may not be used in any
 * advertising or publicity related to this software without specific,
 * written prior authorization.  Any use of this software must include
 * the above copyright notice.
 *
 */
#ifndef dmmetric_H
#define dmmetric_H
#include "util/h/sys.h"
#include "util/h/hist.h"
#include "dataManager.thread.h"
#include "dataManager.thread.SRVR.h"
#include <string.h>
#include "paradyn/src/UIthread/Status.h"
#include <stdlib.h>
#include "util/h/Vector.h"
#include "util/h/Dictionary.h"
#include "util/h/String.h"
#include "util/h/aggregateSample.h"
#include "DMinclude.h"
#include "DMdaemon.h"
#include "paradyn/src/TCthread/tunableConst.h"


class metricInstance;

// a part of an mi.
//
class component {
    friend class metricInstance;
    friend class paradynDaemon;
    public:
	component(paradynDaemon *d, int i, metricInstance *mi) {
	    daemon = d;
	    id = i;
            // Is this add unique?
            assert(i >= 0);
	    d->activeMids[(unsigned)id] = mi;
	}
	~component() {
	    daemon->disableDataCollection(id);
            assert(id>=0);
            daemon->disabledMids += (unsigned) id;
            daemon->activeMids.undef((unsigned)id);
	}
	int getId(){return(id);}
        paradynDaemon *getDaemon() { return(daemon); }

    private:
	sampleInfo sample;
	paradynDaemon *daemon;
	int id;
};


//
//  info about a metric in the system
//
class metric {
    friend class dataManager;
    friend class metricInstance;
    friend class paradynDaemon;
    friend void addMetric(T_dyninstRPC::metricInfo &info);
    friend metricInstance *DMenableData(perfStreamHandle, metricHandle,
	 			        resourceListHandle, phaseType,
					unsigned, unsigned);

    friend void histDataCallBack(sampleValue *, timeStamp , 
				 int , int , void *, bool);
    public:
	metric(T_dyninstRPC::metricInfo i); 
	const T_dyninstRPC::metricInfo  *getInfo() { return(&info); }
	const char *getName() { return((info.name.string_of()));}
	const char *getUnits() { return((info.units.string_of()));}
	dm_MetUnitsType  getUnitsType() { 
            if(info.unitstype == 0) return(UnNormalized);
	    else if(info.unitstype == 1) return(Normalized);
	    else return(Sampled);}
	metricHandle getHandle() { return(info.handle);}
	metricStyle  getStyle() { return((metricStyle) info.style); }
        int   getAggregate() { return info.aggregate;}

	static unsigned  size(){return(metrics.size());}
	static const T_dyninstRPC::metricInfo  *getInfo(metricHandle handle);
	static const char *getName(metricHandle handle);
        static const metricHandle  *find(const string name); 
	static vector<string> *allMetricNames(bool all);
	static vector<met_name_id> *allMetricNamesIds(bool all);
	bool isDeveloperMode() { return info.developerMode; }

    private:
	static dictionary_hash<string, metric*> allMetrics;
	static vector<metric*> metrics;  // indexed by metric id
	T_dyninstRPC::metricInfo info;

        static metric  *getMetric(metricHandle iName); 
};

struct archive_type {
    Histogram *data;
    phaseHandle phaseId;
};

typedef struct archive_type ArchiveType;

class metricInstance {
    friend class dataManager;
    friend class metric;
    friend class paradynDaemon;
    friend void histDataCallBack(sampleValue *buckets, timeStamp, int count, 
				 int first, void *arg, bool globalFlag);
    friend metricInstance *DMenableData(perfStreamHandle,metricHandle,
					resourceListHandle,phaseType,
					unsigned, unsigned);
    public:
	metricInstance(resourceListHandle rl, metricHandle m,phaseHandle ph);
	~metricInstance(); 
	float getValue() {
	    float ret;
	    if (!data) abort();
	    ret = data->getValue();
	    ret /= enabledTime;
	    return(ret);
	}
	float getTotValue() {
	    float ret;

	    if (!data) abort();
	    ret = data->getValue();
	    return(ret);
	}
	int currUsersCount(){return(users.size());}
	int globalUsersCount(){return(global_users.size());}
	int getSampleValues(sampleValue*, int, int, phaseType);
	int getArchiveValues(sampleValue*, int, int, phaseHandle);

        static unsigned  mhash(const metricInstanceHandle &val){
	    return((unsigned)val);
	}
	metricInstanceHandle getHandle(){ return(id); }
	metricHandle getMetricHandle(){ return(met); }
	resourceListHandle getFocusHandle(){ return(focus); }
	void addInterval(timeStamp s,timeStamp e,sampleValue v,bool b){
	     if(data) 
                 data->addInterval(s,e,v,b);
             if(global_data)
		 global_data->addInterval(s,e,v,b);
	}
        // void disableDataCollection(perfStreamHandle ps);

        bool isCurrHistogram(){if (data) return(true); else return(false);}
	bool isEnabled(){return(enabled);}
	void setEnabled(){ enabled = true;}
	void clearEnabled(){ enabled = false;}
	void setPersistentData(){ persistent_data = true; } 
	void setPersistentCollection(){ persistent_collection = true; } 
	// returns true if the metric instance can be deleted 
	bool clearPersistentData();  
	void clearPersistentCollection(){ persistent_collection = false; } 
	bool isDataPersistent(){ return persistent_data;}
	bool isCollectionPersistent(){ return persistent_collection;}
	// returns false if componet was already on list (not added)
	bool addComponent(component *new_comp);
	bool addPart(sampleInfo *new_part);

	static timeStamp GetGlobalWidth(){return(global_bucket_width);}
	static timeStamp GetCurrWidth(){return(curr_bucket_width);}
	static void SetGlobalWidth(timeStamp nw){global_bucket_width = nw;}
	static void SetCurrWidth(timeStamp nw){curr_bucket_width = nw;}
	static phaseHandle GetCurrPhaseId(){return(curr_phase_id);}
	static void setPhaseId(phaseHandle ph){curr_phase_id = ph;}
	static void stopAllCurrentDataCollection(phaseHandle);
	static u_int numGlobalHists(){ return(num_global_hists); }
	static u_int numCurrHists(){ return(num_curr_hists); }
	static void incrNumGlobalHists(){ num_global_hists++; }
	static void incrNumCurrHists(){ num_curr_hists++; }
	static void decrNumCurrHists(){ if(num_curr_hists) num_curr_hists--; }
	static void decrNumGlobalHists(){ if(num_global_hists) num_global_hists--; }

    private:
	metricHandle met;
	resourceListHandle focus;
	float enabledTime;
	bool enabled;    // set if data for mi is currently enabled

	// one component for each daemon contributing to the metric value 
	// one part for each component
	// as data arrives from each daemon the appropriate part is updated
	vector<sampleInfo *> parts;
	vector<component *> components; 
	// the number of processes per daemon contributing to the metric 
	// used to correctly compute average for non-internal metrics  
	vector<u_int> num_procs_per_part;

	// when each part of the component has a value for a new interval
	// (starting from the last time sample was updated) this value
	// is updated from its components and the result is bucketed
	// by a histogram (either data or global_data or both) 
	sampleInfo sample;

	vector<perfStreamHandle> users;  // subscribers to curr. phase data
	Histogram *data;		 // data corr. to curr. phase
	vector<perfStreamHandle> global_users;  // subscribers to global data
	Histogram *global_data;	    // data corr. to global phase
        vector<ArchiveType *> old_data;  // histograms of data from old phases 
        
	// if set, archive old data on disable and on new phase definition
	bool persistent_data;  
	// if set, don't disable on new phase definition
	bool persistent_collection; 

	unsigned id;
	static dictionary_hash<metricInstanceHandle,metricInstance *> 
	    allMetricInstances;

	static u_int next_id;
        // info. about phase data
	static phaseHandle curr_phase_id;  // TODO: set this on Startphase
	static timeStamp global_bucket_width;  // updated on fold
	static timeStamp curr_bucket_width;    // updated on fold

	// these values only change on enable, disable, and phase start events
	// they count the number of active histograms (active means that data
	// is currently being collected for the histogram)
	static u_int num_curr_hists; // num of curr. phase active histograms 
	static u_int num_global_hists; // num of global phase active histograms 

        static metricInstance *getMI(metricInstanceHandle);
	static metricInstance *find(metricHandle, resourceListHandle);
        void newCurrDataCollection(metricStyle,dataCallBack,foldCallBack);
        void newGlobalDataCollection(metricStyle,dataCallBack,foldCallBack);
	void addCurrentUser(perfStreamHandle p); 
	void addGlobalUser(perfStreamHandle p); 
	// clear enabled flag and remove comps and parts
	void dataDisable();  
        void removeGlobalUser(perfStreamHandle);
        void removeCurrUser(perfStreamHandle);
	bool deleteCurrHistogram();
};
#endif
