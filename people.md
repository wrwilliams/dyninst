<ul>
{% for member in site.github.organization_members %}
    <li><a href="{{member.url}}"><img src="{{member.avatar_url}}">member.url</a>
{% endfor %}
</ul>
