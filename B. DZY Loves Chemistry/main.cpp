#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int nodes=60;
long long int sum=1;
vector<int>graph[nodes];
bool vis[nodes];
void dfs(int node)
{
    vis[node]=1;
    for(int j=0;j<graph[node].size();++j)
    {
        if(vis[graph[node][j]])continue;
        sum*=2;
        dfs(graph[node][j]);

    }

}
int main()
{
    int n,m,maxi=0;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }


    for(int i=1;i<=n;++i)
    {
        if(vis[i])continue;
        dfs(i);
    }
    cout<<sum;
    return 0;
}
