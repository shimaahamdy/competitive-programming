#include <iostream>
#include <bits/stdc++.h>

using namespace std;
set<int>graph[100005];
int color[100005];
int main()
{
    int i=1,n,m,a,b;
    for(cin>>n>>m;i<=n;cin>>color[i++]);
    for(int i=0;i<m;++i)
    {
        cin>>a>>b;
        if(color[a]!=color[b])
        {
            graph[color[a]].insert(color[b]);
            graph[color[b]].insert(color[a]);
        }
    }
    int ans=color[1];
    for(int i=1;i<=n;++i)
    {
        if(graph[color[i]].size()>graph[ans].size())
        {
            ans=color[i];
        }
        else if(graph[color[i]].size()==graph[ans].size() && color[i]<ans)ans=color[i];
    }
    cout<<ans;
    return 0;
}
