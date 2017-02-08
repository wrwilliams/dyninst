# Change Log

## [v9.3.1](https://github.com/dyninst/dyninst/releases/tags/v9.3.1) (2017-02-08)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.3.0...v9.3.1)

**Fixed bugs:**

- BPatch\_binaryEdit::writeFile\(\) fails for stack diversification [\#311](https://github.com/dyninst/dyninst/issues/311)
- Decode returns null shared pointer [\#288](https://github.com/dyninst/dyninst/issues/288)
- Operands labelled "\[empty\]" with operand type mismatch \(all with 0x67 prefix\) [\#203](https://github.com/dyninst/dyninst/issues/203)

**Closed issues:**

- arm64: test\_stack\_1 test log [\#315](https://github.com/dyninst/dyninst/issues/315)
- Stackwalk issue on arm64  [\#303](https://github.com/dyninst/dyninst/issues/303)

**Merged pull requests:**

- Changing the URL of libelf to download elfutil. [\#318](https://github.com/dyninst/dyninst/pull/318) ([sashanicolas](https://github.com/sashanicolas))
- Displacement validation checks updated [\#314](https://github.com/dyninst/dyninst/pull/314) ([jdetter](https://github.com/jdetter))
- Release9.3/fixes/icc binaries [\#310](https://github.com/dyninst/dyninst/pull/310) ([mxz297](https://github.com/mxz297))
- Fix test\_basic test error [\#309](https://github.com/dyninst/dyninst/pull/309) ([ikitayama](https://github.com/ikitayama))
- Make dyninst compile on x64 windows [\#168](https://github.com/dyninst/dyninst/pull/168) ([pefoley2](https://github.com/pefoley2))

## [v9.3.0](https://github.com/dyninst/dyninst/releases/tags/v9.3.0) (2016-12-22)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.2.0...v9.3.0)

**Implemented enhancements:**

- Merge AT&T syntax for x86 and ARM [\#210](https://github.com/dyninst/dyninst/issues/210)
- Two options for opcode should print one, not both. [\#199](https://github.com/dyninst/dyninst/issues/199)
- Read access to SymtabAPI and ParseAPI should be thread-safe [\#144](https://github.com/dyninst/dyninst/issues/144)
- New format for decoding tables [\#128](https://github.com/dyninst/dyninst/issues/128)
- InstructionAPI disassembly should match AT&T syntax [\#4](https://github.com/dyninst/dyninst/issues/4)
- x86 decoding and syntax fixes -- tentative [\#271](https://github.com/dyninst/dyninst/pull/271) ([jdetter](https://github.com/jdetter))
- findMain improvements [\#142](https://github.com/dyninst/dyninst/pull/142) ([jdetter](https://github.com/jdetter))
- Added asserts in liveness.C to prevent buffer underreads for [\#141](https://github.com/dyninst/dyninst/pull/141) ([jdetter](https://github.com/jdetter))

**Fixed bugs:**

- 'nullptr' not declared for GCC 4.4.7-17 compiler [\#278](https://github.com/dyninst/dyninst/issues/278)
- Test4\_4 seems to be in deadlock on amd64\_ubu14 [\#274](https://github.com/dyninst/dyninst/issues/274)
- Testsuite not building with branch att\_syntax\_formerge [\#272](https://github.com/dyninst/dyninst/issues/272)
- att\_syntax not building after merge [\#230](https://github.com/dyninst/dyninst/issues/230)
- VEX3 and EVEX assert - decoding invalid should throw exception or return error [\#213](https://github.com/dyninst/dyninst/issues/213)
- Dynist returns error "\(bad\)" decoding for valid sal variants. [\#207](https://github.com/dyninst/dyninst/issues/207)
- No opcode suffix and no register operand creates ambiguous size. [\#204](https://github.com/dyninst/dyninst/issues/204)
- Instructions produce FIXME opcodes, but otherwise appear correct [\#202](https://github.com/dyninst/dyninst/issues/202)
- Invalid instructions produce FIXME opcodes [\#201](https://github.com/dyninst/dyninst/issues/201)
- Invalid register numbers for VEX3 instructions [\#200](https://github.com/dyninst/dyninst/issues/200)
- Opcode suffixes do not take into account prefix bytes [\#198](https://github.com/dyninst/dyninst/issues/198)
- Incorrect operand suffix for register size for string instruction [\#197](https://github.com/dyninst/dyninst/issues/197)
- Decode incorrect VEX3 as valid instruction [\#196](https://github.com/dyninst/dyninst/issues/196)
- Decode incorrect VEX2 as valid instruction [\#195](https://github.com/dyninst/dyninst/issues/195)
- Double printing first operand [\#193](https://github.com/dyninst/dyninst/issues/193)
- findMain failing on master under Jenkins [\#188](https://github.com/dyninst/dyninst/issues/188)
- error: ‘class func\_instance’ has no member named ‘freeStackMod’ [\#165](https://github.com/dyninst/dyninst/issues/165)
- make install not working on latest master [\#160](https://github.com/dyninst/dyninst/issues/160)
- Add generated cotire directories to gitignore [\#158](https://github.com/dyninst/dyninst/issues/158)
- test\_pt\_ls failing on master \(RHEL6\) [\#157](https://github.com/dyninst/dyninst/issues/157)
- Assertion failure in DwarfWalker [\#152](https://github.com/dyninst/dyninst/issues/152)
- Segfault when a process is attached without specifying exe [\#146](https://github.com/dyninst/dyninst/issues/146)
- stackanalysis assert while running in 32bit mode on master [\#131](https://github.com/dyninst/dyninst/issues/131)
- Cannot find malloc symbol in libc.so [\#126](https://github.com/dyninst/dyninst/issues/126)
- test\_pt\_ls fails with Dyninst master [\#123](https://github.com/dyninst/dyninst/issues/123)
- Rewrite exception handlers to adjust for relocated code [\#121](https://github.com/dyninst/dyninst/issues/121)
- Assertion failure during rewriting [\#116](https://github.com/dyninst/dyninst/issues/116)
- Crash during liveness analysis [\#114](https://github.com/dyninst/dyninst/issues/114)
- Segfault during traversal of slice generated in StackMod [\#113](https://github.com/dyninst/dyninst/issues/113)
- Cleanup ppc \(and old gcc\) issues [\#277](https://github.com/dyninst/dyninst/pull/277) ([wrwilliams](https://github.com/wrwilliams))
- CMake fixes for Cotie and GCC 4.4 compatibility [\#164](https://github.com/dyninst/dyninst/pull/164) ([jdetter](https://github.com/jdetter))
- fix insnCodeGen::modifyData's 64-bit conversion [\#163](https://github.com/dyninst/dyninst/pull/163) ([cuviper](https://github.com/cuviper))
- Fixes for test\_pt\_ls [\#143](https://github.com/dyninst/dyninst/pull/143) ([jdetter](https://github.com/jdetter))

**Closed issues:**

- arm64 building current master fails   [\#304](https://github.com/dyninst/dyninst/issues/304)
- CMake boost error [\#300](https://github.com/dyninst/dyninst/issues/300)
- arm64 pc\_irpc test failure [\#296](https://github.com/dyninst/dyninst/issues/296)
- arm64 pc\_tls Library TLS was not the expected value [\#295](https://github.com/dyninst/dyninst/issues/295)
- arm64 Problem with simple example code in the ProcControlAPI Programmer’s Guide [\#290](https://github.com/dyninst/dyninst/issues/290)
- Stackanalysis asserts when analyzing \_\_start\_context in libc [\#283](https://github.com/dyninst/dyninst/issues/283)
- test1\_30 test failure [\#281](https://github.com/dyninst/dyninst/issues/281)
- AppVeyor having issues downloading boost [\#270](https://github.com/dyninst/dyninst/issues/270)
- PGI line info regression [\#243](https://github.com/dyninst/dyninst/issues/243)
- Update build requirements: drop libelf.so.0 support [\#242](https://github.com/dyninst/dyninst/issues/242)
- LibraryTracker unclear in StackWalkerAPI [\#224](https://github.com/dyninst/dyninst/issues/224)
- Race conditions with transient threads [\#208](https://github.com/dyninst/dyninst/issues/208)
- Call emulation causing testsuite failures [\#187](https://github.com/dyninst/dyninst/issues/187)
- Analyzing functions in acroRd32.dll \(large binary without symbols\) [\#179](https://github.com/dyninst/dyninst/issues/179)
- support for arm/thumb? [\#178](https://github.com/dyninst/dyninst/issues/178)
- PPC64 generateBranchViaTrap: Assertion `isCall == false' failed. [\#175](https://github.com/dyninst/dyninst/issues/175)
- Assertion failed with a bad DYNINSTAPI\_RT\_LIB [\#153](https://github.com/dyninst/dyninst/issues/153)
- document proccontrol "tracking" APIs [\#151](https://github.com/dyninst/dyninst/issues/151)
- Indirect jumps that use jump tables are not relocated correctly [\#139](https://github.com/dyninst/dyninst/issues/139)
- ABI changes from v9.2.0 to v9.2\_patches [\#136](https://github.com/dyninst/dyninst/issues/136)
- PC-relative read in indirect jump was not modified during relocation [\#133](https://github.com/dyninst/dyninst/issues/133)
- Assert in StackAnalysis on release9.2/fixes/test\_pt\_ls [\#130](https://github.com/dyninst/dyninst/issues/130)
- Line information fixes for HPCToolkit [\#122](https://github.com/dyninst/dyninst/issues/122)
- Segfault when parsing binary with no functions [\#53](https://github.com/dyninst/dyninst/issues/53)
- rewriter tests fail/crash on ppc64 [\#34](https://github.com/dyninst/dyninst/issues/34)
- Warnings not being properly disabled under Visual Studio [\#26](https://github.com/dyninst/dyninst/issues/26)

**Merged pull requests:**

- ARM64 fixes for stack walking [\#307](https://github.com/dyninst/dyninst/pull/307) ([wrwilliams](https://github.com/wrwilliams))
- Update AssignmentConverter instantiation to make use of stack analysis explicit. [\#306](https://github.com/dyninst/dyninst/pull/306) ([wrwilliams](https://github.com/wrwilliams))
- Bug fix for PR\#294 [\#302](https://github.com/dyninst/dyninst/pull/302) ([wrwilliams](https://github.com/wrwilliams))
- Enhance DWARF parser to recognize \(and skip\) DW\_TAG\_member entries for static fields [\#299](https://github.com/dyninst/dyninst/pull/299) ([rauhfasertapete](https://github.com/rauhfasertapete))
- Fix omitting leading 0's when concatenating hex bytes in stringstream [\#298](https://github.com/dyninst/dyninst/pull/298) ([rauhfasertapete](https://github.com/rauhfasertapete))
- More manual fixes [\#297](https://github.com/dyninst/dyninst/pull/297) ([mxz297](https://github.com/mxz297))
- arm64: remove syscall tracing workaround [\#294](https://github.com/dyninst/dyninst/pull/294) ([ikitayama](https://github.com/ikitayama))
- Autodetect RTLib location [\#293](https://github.com/dyninst/dyninst/pull/293) ([wrwilliams](https://github.com/wrwilliams))
- Small fixes [\#292](https://github.com/dyninst/dyninst/pull/292) ([wrwilliams](https://github.com/wrwilliams))
- Update manual version numbers and minor fixes [\#291](https://github.com/dyninst/dyninst/pull/291) ([mxz297](https://github.com/mxz297))
- Remove stackanalysis assertions [\#289](https://github.com/dyninst/dyninst/pull/289) ([wrwilliams](https://github.com/wrwilliams))
- Line info cleanup [\#287](https://github.com/dyninst/dyninst/pull/287) ([wrwilliams](https://github.com/wrwilliams))
- Passing test\_pt\_ls \(at least on RHEL7\) [\#286](https://github.com/dyninst/dyninst/pull/286) ([mxz297](https://github.com/mxz297))
- Sfm/fixes/untouched blocks [\#285](https://github.com/dyninst/dyninst/pull/285) ([morehouse](https://github.com/morehouse))
- Use in-place translation [\#284](https://github.com/dyninst/dyninst/pull/284) ([wrwilliams](https://github.com/wrwilliams))
- common: use ptrace if yama blocked process\_vm\_readv/writev [\#280](https://github.com/dyninst/dyninst/pull/280) ([cuviper](https://github.com/cuviper))
- Fix dependency of LibDwarf [\#279](https://github.com/dyninst/dyninst/pull/279) ([rafzi](https://github.com/rafzi))
- Compiling DynInst v9.2.0 on arm64 [\#273](https://github.com/dyninst/dyninst/pull/273) ([ikitayama](https://github.com/ikitayama))
- proccontrol: fix double-increment while erasing a dead process [\#261](https://github.com/dyninst/dyninst/pull/261) ([cuviper](https://github.com/cuviper))
- Document some of the ProcControlAPI options in PlatFeatures.h. [\#260](https://github.com/dyninst/dyninst/pull/260) ([morehouse](https://github.com/morehouse))
- proccontrol: scrub newly created threads that fail to attach [\#259](https://github.com/dyninst/dyninst/pull/259) ([cuviper](https://github.com/cuviper))
- RT: trymmap should retry if the result is out of range [\#231](https://github.com/dyninst/dyninst/pull/231) ([cuviper](https://github.com/cuviper))
- Merge ARM instruction semantics and jump table parsing [\#228](https://github.com/dyninst/dyninst/pull/228) ([mxz297](https://github.com/mxz297))
- line info bugfixes [\#226](https://github.com/dyninst/dyninst/pull/226) ([wrwilliams](https://github.com/wrwilliams))
- LibraryTracker documentation [\#225](https://github.com/dyninst/dyninst/pull/225) ([wrwilliams](https://github.com/wrwilliams))
- proccontrol: Synchronize additional threads found during attach [\#214](https://github.com/dyninst/dyninst/pull/214) ([cuviper](https://github.com/cuviper))
- Fix errors when thread disappears during attach [\#212](https://github.com/dyninst/dyninst/pull/212) ([cuviper](https://github.com/cuviper))
- Added symbol linkage support for GNU unique linkage types [\#209](https://github.com/dyninst/dyninst/pull/209) ([bwelton](https://github.com/bwelton))
- Fix icc warning flags [\#206](https://github.com/dyninst/dyninst/pull/206) ([pefoley2](https://github.com/pefoley2))
- Make dynC work on windows [\#205](https://github.com/dyninst/dyninst/pull/205) ([pefoley2](https://github.com/pefoley2))
- pefoley2-boost\_win [\#194](https://github.com/dyninst/dyninst/pull/194) ([wrwilliams](https://github.com/wrwilliams))
- ElfX: add xlate funcs [\#192](https://github.com/dyninst/dyninst/pull/192) ([wrwilliams](https://github.com/wrwilliams))
- proccontrol: check thread handle before calculating TLS [\#191](https://github.com/dyninst/dyninst/pull/191) ([cuviper](https://github.com/cuviper))
- Improved the findMain analysis significantly [\#189](https://github.com/dyninst/dyninst/pull/189) ([jdetter](https://github.com/jdetter))
- Exception frame rewriting fixes [\#186](https://github.com/dyninst/dyninst/pull/186) ([jdetter](https://github.com/jdetter))
- String table now includes an entry at zero for "unknown", so don't subtract from the DWARF file number. [\#185](https://github.com/dyninst/dyninst/pull/185) ([wrwilliams](https://github.com/wrwilliams))
- cmake: Fix not building when libiberty is automatically installed [\#183](https://github.com/dyninst/dyninst/pull/183) ([rafzi](https://github.com/rafzi))
- Determine the architecture of an ELF by looking at the file header in… [\#182](https://github.com/dyninst/dyninst/pull/182) ([rafzi](https://github.com/rafzi))
- Documentation updates -- tentative [\#180](https://github.com/dyninst/dyninst/pull/180) ([jdetter](https://github.com/jdetter))
- Fix operand types for vpand [\#177](https://github.com/dyninst/dyninst/pull/177) ([BlairArchibald](https://github.com/BlairArchibald))
- symtabAPI: dont expect a data segment in elf; eliminate dead code [\#173](https://github.com/dyninst/dyninst/pull/173) ([rafzi](https://github.com/rafzi))
- elf: fix uninitialized isBigEndian for archives; duplicate code removal [\#172](https://github.com/dyninst/dyninst/pull/172) ([rafzi](https://github.com/rafzi))
- Support building with LTO [\#171](https://github.com/dyninst/dyninst/pull/171) ([pefoley2](https://github.com/pefoley2))
- Fix various warnings under Visual Studio [\#169](https://github.com/dyninst/dyninst/pull/169) ([pefoley2](https://github.com/pefoley2))
- Guard StackMod implementation from non-x86 architectures. [\#166](https://github.com/dyninst/dyninst/pull/166) ([morehouse](https://github.com/morehouse))
- Added generated cotire directories to gitignore [\#159](https://github.com/dyninst/dyninst/pull/159) ([jdetter](https://github.com/jdetter))
- symtabAPI: use the known type for new relocations [\#156](https://github.com/dyninst/dyninst/pull/156) ([cuviper](https://github.com/cuviper))
- Sfm/feature/interproc analysis [\#155](https://github.com/dyninst/dyninst/pull/155) ([morehouse](https://github.com/morehouse))
- Remove unnecessary assert from dwarfWalker.  Fixes \#152. [\#154](https://github.com/dyninst/dyninst/pull/154) ([morehouse](https://github.com/morehouse))
- proccontrol: fix process attachment without an exe [\#148](https://github.com/dyninst/dyninst/pull/148) ([cuviper](https://github.com/cuviper))
- proccontrol: fix process attachment without an exe [\#147](https://github.com/dyninst/dyninst/pull/147) ([cuviper](https://github.com/cuviper))
- Restored dyn\_regs.h to v9.2.0 version [\#140](https://github.com/dyninst/dyninst/pull/140) ([jdetter](https://github.com/jdetter))
- Fixes significant ABI issues on v9.2\_patches. [\#138](https://github.com/dyninst/dyninst/pull/138) ([jdetter](https://github.com/jdetter))
- Line info optimizations [\#135](https://github.com/dyninst/dyninst/pull/135) ([wrwilliams](https://github.com/wrwilliams))
- Matt's patch applied -- fixes test\_stack\_1 issue [\#134](https://github.com/dyninst/dyninst/pull/134) ([jdetter](https://github.com/jdetter))
- Rose build fixes [\#129](https://github.com/dyninst/dyninst/pull/129) ([pefoley2](https://github.com/pefoley2))
- Merge arm64/feature/semantics\_setup into master [\#127](https://github.com/dyninst/dyninst/pull/127) ([ssunny7](https://github.com/ssunny7))
- V9.2 patches [\#124](https://github.com/dyninst/dyninst/pull/124) ([jdetter](https://github.com/jdetter))
- Release9.2/fixes/liveness patch [\#118](https://github.com/dyninst/dyninst/pull/118) ([jdetter](https://github.com/jdetter))
- Add config to build using Appveyor [\#19](https://github.com/dyninst/dyninst/pull/19) ([pefoley2](https://github.com/pefoley2))
- Fix warnings produced when compiling with clang [\#14](https://github.com/dyninst/dyninst/pull/14) ([pefoley2](https://github.com/pefoley2))

## [v9.2.0](https://github.com/dyninst/dyninst/releases/tags/v9.2.0) (2016-06-29)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.1.0...v9.2.0)

**Fixed bugs:**

- Rewriting with StackMods broken [\#111](https://github.com/dyninst/dyninst/issues/111)
- Multiple testsuite failures on VEX [\#89](https://github.com/dyninst/dyninst/issues/89)
- runTest -test pc\_addlibrary fails/dumps core \(actually, none of the proccontrol tests run\) [\#81](https://github.com/dyninst/dyninst/issues/81)
- parseThat not outputting executable binary \(Exec format error\) [\#71](https://github.com/dyninst/dyninst/issues/71)

**Closed issues:**

- Assertion during libxul PIE rewriting \(VEX/master\) [\#110](https://github.com/dyninst/dyninst/issues/110)
- Testsuite failures on master/VEX for 32 bit platform [\#104](https://github.com/dyninst/dyninst/issues/104)
- RHEL6 "cannot allocate memory in static TLS block" [\#101](https://github.com/dyninst/dyninst/issues/101)
- Infinite recursion in TLS tramp guard [\#98](https://github.com/dyninst/dyninst/issues/98)
- Rewritten binary dies with SIGILL [\#96](https://github.com/dyninst/dyninst/issues/96)
- pc\_fork\_exec failure on master and VEX [\#94](https://github.com/dyninst/dyninst/issues/94)
- Rewritten libc.so is not usable [\#93](https://github.com/dyninst/dyninst/issues/93)
- dyninstAPI\_RT build failure on Windows [\#92](https://github.com/dyninst/dyninst/issues/92)
- amd64\_7\_arg\_call passing, then segfaulting from shared pointer on VEX [\#90](https://github.com/dyninst/dyninst/issues/90)
- New instruction decoding problem in master branch [\#88](https://github.com/dyninst/dyninst/issues/88)
- Build failure on windows [\#86](https://github.com/dyninst/dyninst/issues/86)
- Dyninst parsing part of function multiple times [\#83](https://github.com/dyninst/dyninst/issues/83)
- Problems with Instruction API parsing x86-64 binaries: xhpl executable [\#80](https://github.com/dyninst/dyninst/issues/80)
- Problems with Instruction API parsing x86-64 binaries: sqrtsd [\#79](https://github.com/dyninst/dyninst/issues/79)
- symtabAPI fails to link on 32bit linux [\#70](https://github.com/dyninst/dyninst/issues/70)
- Dyndwarf assert thrown on latest master [\#67](https://github.com/dyninst/dyninst/issues/67)
- decodeOneOperand\(\) called with unknown addressing method 18 [\#66](https://github.com/dyninst/dyninst/issues/66)
- Segfault during PIE rewriting [\#65](https://github.com/dyninst/dyninst/issues/65)
- walkSingleFrame run against local process on WIndows crashes [\#64](https://github.com/dyninst/dyninst/issues/64)
- Symtab can't find any functions without libc [\#58](https://github.com/dyninst/dyninst/issues/58)
- lei1114 [\#55](https://github.com/dyninst/dyninst/issues/55)
- Rewriting of binaries with GNU\_RELRO segment fails on master [\#52](https://github.com/dyninst/dyninst/issues/52)
- Master timeout on test4\_2 and test4\_4 on Fedora23 [\#50](https://github.com/dyninst/dyninst/issues/50)
- ERROR: failed bind/eval [\#48](https://github.com/dyninst/dyninst/issues/48)
- Possible slicing/frame issue [\#44](https://github.com/dyninst/dyninst/issues/44)
- dyninstAPI documentation typo [\#41](https://github.com/dyninst/dyninst/issues/41)
- MachRegister::getReturnAddress not implemented on x86/x86\_64 [\#40](https://github.com/dyninst/dyninst/issues/40)
- Master not building with boost 1.58.0 \(undefined references\) [\#38](https://github.com/dyninst/dyninst/issues/38)
- ptrace\_peektext failing and producing spam in thread tests [\#36](https://github.com/dyninst/dyninst/issues/36)
- Test 4\_1, 4\_2, and 4\_4 fail on ppc64 [\#35](https://github.com/dyninst/dyninst/issues/35)
- test1\_33 fails on ppc64 [\#33](https://github.com/dyninst/dyninst/issues/33)
- PLT entries misparsed on ARM [\#32](https://github.com/dyninst/dyninst/issues/32)
- Dataflow documentation: Stack Analysis [\#31](https://github.com/dyninst/dyninst/issues/31)
- Dataflow documentation: Slicing and SymEval [\#30](https://github.com/dyninst/dyninst/issues/30)
- Dataflow documentation: Intro/Abstractions [\#29](https://github.com/dyninst/dyninst/issues/29)
- BPatch\_function.C.o build failure on PPC64le [\#23](https://github.com/dyninst/dyninst/issues/23)
- getABIVersion\(\) not defined in Object-nt.h [\#21](https://github.com/dyninst/dyninst/issues/21)
- Enable build only if .travis.yml is present option for repo [\#20](https://github.com/dyninst/dyninst/issues/20)
- Bundling cvconst.h [\#17](https://github.com/dyninst/dyninst/issues/17)
- Missing htobe32 function under Visual Studio [\#16](https://github.com/dyninst/dyninst/issues/16)
- Line info gets misfiled into incorrect Modules [\#15](https://github.com/dyninst/dyninst/issues/15)
- ./runTests -test test1\_1 fails on ppc64 platform [\#8](https://github.com/dyninst/dyninst/issues/8)
- LivenessAnalyzer::isMMX assertion failure [\#7](https://github.com/dyninst/dyninst/issues/7)
- "Bad addressing mode!" in F23 libm.so [\#6](https://github.com/dyninst/dyninst/issues/6)
- pc\_tls fails [\#3](https://github.com/dyninst/dyninst/issues/3)
- pc\_add\_library fails in attach mode on 9.2.x [\#2](https://github.com/dyninst/dyninst/issues/2)
- test\_mem\_\* fails on 9.2.x [\#1](https://github.com/dyninst/dyninst/issues/1)

**Merged pull requests:**

- Disabled condition decoding in stack rewriting. [\#112](https://github.com/dyninst/dyninst/pull/112) ([jdetter](https://github.com/jdetter))
- symtabAPI: Apply corrections for the library\_adjust page offset [\#109](https://github.com/dyninst/dyninst/pull/109) ([cuviper](https://github.com/cuviper))
- fix dll linkage on windows [\#108](https://github.com/dyninst/dyninst/pull/108) ([pefoley2](https://github.com/pefoley2))
- Rewriter fixes, instruction decoding fixes. [\#107](https://github.com/dyninst/dyninst/pull/107) ([jdetter](https://github.com/jdetter))
- Don't use broken llvm apt mirror [\#105](https://github.com/dyninst/dyninst/pull/105) ([pefoley2](https://github.com/pefoley2))
- Fixes for jump table, instruction decoding, windows proccontrol [\#102](https://github.com/dyninst/dyninst/pull/102) ([mxz297](https://github.com/mxz297))
- RTlib: use static TLS for the tramp guard [\#99](https://github.com/dyninst/dyninst/pull/99) ([cuviper](https://github.com/cuviper))
- Visual Studio Build Fixes [\#97](https://github.com/dyninst/dyninst/pull/97) ([pefoley2](https://github.com/pefoley2))
- Refactor RTheap to avoid doing arithmetic with void\* [\#95](https://github.com/dyninst/dyninst/pull/95) ([pefoley2](https://github.com/pefoley2))
- Latest fix for rice folks [\#91](https://github.com/dyninst/dyninst/pull/91) ([mxz297](https://github.com/mxz297))
- Build fix for addrtranslate [\#87](https://github.com/dyninst/dyninst/pull/87) ([pefoley2](https://github.com/pefoley2))
- Temporarily disable broken clang build [\#85](https://github.com/dyninst/dyninst/pull/85) ([pefoley2](https://github.com/pefoley2))
- Simplify INTERP logic for better consistency [\#84](https://github.com/dyninst/dyninst/pull/84) ([cuviper](https://github.com/cuviper))
- Fix for square root floating point instructions [\#82](https://github.com/dyninst/dyninst/pull/82) ([jdetter](https://github.com/jdetter))
- Set defaults for Windows first-party stack walking: library tracker [\#78](https://github.com/dyninst/dyninst/pull/78) ([wrwilliams](https://github.com/wrwilliams))
- Define htobe on Windows/MSVC as a wrapper for \_byteswap\_ulong [\#77](https://github.com/dyninst/dyninst/pull/77) ([wrwilliams](https://github.com/wrwilliams))
- release9.2/bugs/rtheap\_mmap\_only [\#76](https://github.com/dyninst/dyninst/pull/76) ([wrwilliams](https://github.com/wrwilliams))
- Fix 32-bit build; rename emitElf64 to emitElf [\#73](https://github.com/dyninst/dyninst/pull/73) ([wrwilliams](https://github.com/wrwilliams))
- Truncate PTRACE\_GETEVENTMSG exit status to int [\#69](https://github.com/dyninst/dyninst/pull/69) ([cuviper](https://github.com/cuviper))
- Fix Function/Module mapping [\#61](https://github.com/dyninst/dyninst/pull/61) ([wrwilliams](https://github.com/wrwilliams))
- Fix rewriting interp sections and debug symbols [\#57](https://github.com/dyninst/dyninst/pull/57) ([cuviper](https://github.com/cuviper))
- Fix uninitialized data in rewriter elf\_update [\#54](https://github.com/dyninst/dyninst/pull/54) ([cuviper](https://github.com/cuviper))
- Merge 9.2 branch back to master [\#51](https://github.com/dyninst/dyninst/pull/51) ([wrwilliams](https://github.com/wrwilliams))
- fix\#48 [\#49](https://github.com/dyninst/dyninst/pull/49) ([wrwilliams](https://github.com/wrwilliams))
- symtabAPI: don't free cuDIE in parseLineInfoForCU [\#47](https://github.com/dyninst/dyninst/pull/47) ([cuviper](https://github.com/cuviper))
- symtabAPI: comment out some debug chatter [\#46](https://github.com/dyninst/dyninst/pull/46) ([cuviper](https://github.com/cuviper))
- Remove low-level warnings from ptrace read/write failures [\#43](https://github.com/dyninst/dyninst/pull/43) ([cuviper](https://github.com/cuviper))
- Recover from a bad force push. [\#42](https://github.com/dyninst/dyninst/pull/42) ([wrwilliams](https://github.com/wrwilliams))
- Remove low-level warnings from ptrace read/write failures [\#39](https://github.com/dyninst/dyninst/pull/39) ([cuviper](https://github.com/cuviper))
- Fix \#23, build failure on PPC64le [\#25](https://github.com/dyninst/dyninst/pull/25) ([pefoley2](https://github.com/pefoley2))
- Provided base class virtual for getABIVersion\(\) that returns false when not implemented [\#24](https://github.com/dyninst/dyninst/pull/24) ([mcfadden8](https://github.com/mcfadden8))
- Allow dyninst to be compiled using clang [\#13](https://github.com/dyninst/dyninst/pull/13) ([pefoley2](https://github.com/pefoley2))
- Add initial file for travis [\#12](https://github.com/dyninst/dyninst/pull/12) ([pefoley2](https://github.com/pefoley2))
- Misc fixes and improvements [\#11](https://github.com/dyninst/dyninst/pull/11) ([pefoley2](https://github.com/pefoley2))
- ProcControl and Symtab support for ppc64le [\#10](https://github.com/dyninst/dyninst/pull/10) ([mcfadden8](https://github.com/mcfadden8))

## [v9.1.0](https://github.com/dyninst/dyninst/releases/tags/v9.1.0) (2015-12-16)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.0.3...v9.1.0)

## [v9.0.3](https://github.com/dyninst/dyninst/releases/tags/v9.0.3) (2015-08-26)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.0.2...v9.0.3)

## [v9.0.2](https://github.com/dyninst/dyninst/releases/tags/v9.0.2) (2015-08-24)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.0.1...v9.0.2)

## [v9.0.1](https://github.com/dyninst/dyninst/releases/tags/v9.0.1) (2015-08-21)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v9.0.0...v9.0.1)

## [v9.0.0](https://github.com/dyninst/dyninst/releases/tags/v9.0.0) (2015-08-20)
[Full Changelog](https://github.com/dyninst/dyninst/compare/milestone_5...v9.0.0)

## [milestone_5](https://github.com/dyninst/dyninst/releases/tags/milestone_5) (2015-01-15)
[Full Changelog](https://github.com/dyninst/dyninst/compare/milestone_4...milestone_5)

## [milestone_4](https://github.com/dyninst/dyninst/releases/tags/milestone_4) (2015-01-14)
[Full Changelog](https://github.com/dyninst/dyninst/compare/milestone_3...milestone_4)

## [milestone_3](https://github.com/dyninst/dyninst/releases/tags/milestone_3) (2015-01-12)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v8.2.1...milestone_3)

## [v8.2.1](https://github.com/dyninst/dyninst/releases/tags/v8.2.1) (2014-10-30)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v8.2.0.1...v8.2.1)

## [v8.2.0.1](https://github.com/dyninst/dyninst/releases/tags/v8.2.0.1) (2014-08-19)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v8.2.0...v8.2.0.1)

## [v8.2.0](https://github.com/dyninst/dyninst/releases/tags/v8.2.0) (2014-08-19)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v8.1.2...v8.2.0)

## [v8.1.2](https://github.com/dyninst/dyninst/releases/tags/v8.1.2) (2013-06-18)
[Full Changelog](https://github.com/dyninst/dyninst/compare/pre8.1.2RC3...v8.1.2)

## [pre8.1.2RC3](https://github.com/dyninst/dyninst/releases/tags/pre8.1.2RC3) (2013-06-07)
[Full Changelog](https://github.com/dyninst/dyninst/compare/pre8.1.2RC2...pre8.1.2RC3)

## [pre8.1.2RC2](https://github.com/dyninst/dyninst/releases/tags/pre8.1.2RC2) (2013-06-04)
[Full Changelog](https://github.com/dyninst/dyninst/compare/pre8.1.2RC1...pre8.1.2RC2)

## [pre8.1.2RC1](https://github.com/dyninst/dyninst/releases/tags/pre8.1.2RC1) (2013-05-29)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v8.1.1...pre8.1.2RC1)

## [v8.1.1](https://github.com/dyninst/dyninst/releases/tags/v8.1.1) (2013-03-14)
[Full Changelog](https://github.com/dyninst/dyninst/compare/pre-8.1RC1...v8.1.1)

## [pre-8.1RC1](https://github.com/dyninst/dyninst/releases/tags/pre-8.1RC1) (2013-03-01)
[Full Changelog](https://github.com/dyninst/dyninst/compare/pre-8.1...pre-8.1RC1)

## [pre-8.1](https://github.com/dyninst/dyninst/releases/tags/pre-8.1) (2013-02-22)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v8.0...pre-8.1)

## [v8.0](https://github.com/dyninst/dyninst/releases/tags/v8.0) (2012-11-19)
[Full Changelog](https://github.com/dyninst/dyninst/compare/SW8.0CrayRC3...v8.0)

## [SW8.0CrayRC3](https://github.com/dyninst/dyninst/releases/tags/SW8.0CrayRC3) (2012-10-15)
[Full Changelog](https://github.com/dyninst/dyninst/compare/SW8.0RC2...SW8.0CrayRC3)

## [SW8.0RC2](https://github.com/dyninst/dyninst/releases/tags/SW8.0RC2) (2012-10-15)
[Full Changelog](https://github.com/dyninst/dyninst/compare/SW8.0RC1...SW8.0RC2)

## [SW8.0RC1](https://github.com/dyninst/dyninst/releases/tags/SW8.0RC1) (2012-10-15)
[Full Changelog](https://github.com/dyninst/dyninst/compare/kevin-final...SW8.0RC1)

## [kevin-final](https://github.com/dyninst/dyninst/releases/tags/kevin-final) (2012-01-11)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release7_0...kevin-final)

## [Release7_0](https://github.com/dyninst/dyninst/releases/tags/Release7_0) (2011-03-23)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release6_1...Release7_0)

## [Release6_1](https://github.com/dyninst/dyninst/releases/tags/Release6_1) (2009-12-04)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release6_0...Release6_1)

## [Release6_0](https://github.com/dyninst/dyninst/releases/tags/Release6_0) (2009-06-30)
[Full Changelog](https://github.com/dyninst/dyninst/compare/SanDiegoDistro...Release6_0)

## [SanDiegoDistro](https://github.com/dyninst/dyninst/releases/tags/SanDiegoDistro) (2007-11-21)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release5_1...SanDiegoDistro)

## [Release5_1](https://github.com/dyninst/dyninst/releases/tags/Release5_1) (2007-05-31)
[Full Changelog](https://github.com/dyninst/dyninst/compare/release5_1_beta...Release5_1)

## [release5_1_beta](https://github.com/dyninst/dyninst/releases/tags/release5_1_beta) (2007-01-04)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release5_0...release5_1_beta)

## [Release5_0](https://github.com/dyninst/dyninst/releases/tags/Release5_0) (2006-07-05)
[Full Changelog](https://github.com/dyninst/dyninst/compare/pre_multitramp...Release5_0)

## [pre_multitramp](https://github.com/dyninst/dyninst/releases/tags/pre_multitramp) (2005-07-19)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release4_2_1...pre_multitramp)

## [Release4_2_1](https://github.com/dyninst/dyninst/releases/tags/Release4_2_1) (2005-04-12)
[Full Changelog](https://github.com/dyninst/dyninst/compare/mrnet-1_1...Release4_2_1)

## [mrnet-1_1](https://github.com/dyninst/dyninst/releases/tags/mrnet-1_1) (2005-04-04)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release4_2...mrnet-1_1)

## [Release4_2](https://github.com/dyninst/dyninst/releases/tags/Release4_2) (2005-03-23)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Dyninst4_1...Release4_2)

## [Dyninst4_1](https://github.com/dyninst/dyninst/releases/tags/Dyninst4_1) (2004-04-28)
[Full Changelog](https://github.com/dyninst/dyninst/compare/mrnet-1-0...Dyninst4_1)

## [mrnet-1-0](https://github.com/dyninst/dyninst/releases/tags/mrnet-1-0) (2003-09-11)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Before_PVM_Removal...mrnet-1-0)

## [Before_PVM_Removal](https://github.com/dyninst/dyninst/releases/tags/Before_PVM_Removal) (2003-07-30)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Dyninst4_0...Before_PVM_Removal)

## [Dyninst4_0](https://github.com/dyninst/dyninst/releases/tags/Dyninst4_0) (2003-05-30)
[Full Changelog](https://github.com/dyninst/dyninst/compare/snapshot_20020513...Dyninst4_0)

## [snapshot_20020513](https://github.com/dyninst/dyninst/releases/tags/snapshot_20020513) (2002-05-10)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Dyninst3_0...snapshot_20020513)

## [Dyninst3_0](https://github.com/dyninst/dyninst/releases/tags/Dyninst3_0) (2002-01-17)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release3_2...Dyninst3_0)

## [Release3_2](https://github.com/dyninst/dyninst/releases/tags/Release3_2) (2001-03-14)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release3_1...Release3_2)

## [Release3_1](https://github.com/dyninst/dyninst/releases/tags/Release3_1) (2000-08-24)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release3_0...Release3_1)

## [Release3_0](https://github.com/dyninst/dyninst/releases/tags/Release3_0) (2000-05-16)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Dyninst2_0...Release3_0)

## [Dyninst2_0](https://github.com/dyninst/dyninst/releases/tags/Dyninst2_0) (2000-04-11)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release2_1...Dyninst2_0)

## [Release2_1](https://github.com/dyninst/dyninst/releases/tags/Release2_1) (1998-05-06)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release2_0...Release2_1)

## [Release2_0](https://github.com/dyninst/dyninst/releases/tags/Release2_0) (1997-09-19)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release1_1...Release2_0)

## [Release1_1](https://github.com/dyninst/dyninst/releases/tags/Release1_1) (1996-08-16)
[Full Changelog](https://github.com/dyninst/dyninst/compare/Release1_0...Release1_1)

## [Release1_0](https://github.com/dyninst/dyninst/releases/tags/Release1_0) (1996-05-17)
[Full Changelog](https://github.com/dyninst/dyninst/compare/v0_0...Release1_0)

## [v0_0](https://github.com/dyninst/dyninst/releases/tags/v0_0) (1993-09-03)


\* *This Change Log was automatically generated by [github_changelog_generator](https://github.com/skywinder/Github-Changelog-Generator)*