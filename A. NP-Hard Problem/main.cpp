#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>v[100005];
int vis[100005];
void dfs(int i,int color)
{
    vis[i]=color;
    for(int j=0;j<v[i].size();++j)
    {
        if(vis[v[i][j]]==color){exit((cout<<-1<<endl,0));}
        if(!vis[v[i][j]])dfs(v[i][j],3-color);
    }
}
int main()
{
    int n,m;
    int a,b;
    vector<int>c[3];
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;++i)
    {
        if(vis[i])continue;
        dfs(i,1);
    }


    for(int i=1;i<=n;++i)c[vis[i]].push_back(i);
    cout<<c[1].size()<<endl;
    for(int i=0;i<c[1].size();++i)cout<<c[1][i]<<" ";
    cout<<endl;
    cout<<c[2].size()<<endl;
    for(int i=0;i<c[2].size();++i)cout<<c[2][i]<<endl;

        return 0;
}
