#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
vector<int>graph[105];
int numb;
bool vis[105];
bool dfs(int node,int parent)
{
    vis[node]=1;
    for(int j=0;j<graph[node].size();++j)
    {
        if(graph[node][j]==parent)continue;
        if(vis[graph[node][j]])return true;
            else
            {

              ++numb;
            dfs(graph[node][j],node);
           }
    }
    return false;
}
int main()
{
    int n=0,m,out=0;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }
    for(int i=1;i<=n;++i)
    {
        if(vis[i])continue;
        numb=1;
        if(dfs(i,0)&&numb%2!=0)++out;
    }
    if((n%2==0 && out%2==0)|| (n%2!=0 && out%2!=0))cout<<out;
    else cout<<out+1;



return 0;
}
