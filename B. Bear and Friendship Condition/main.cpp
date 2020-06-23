#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>v[150000];
bool vis[150000];
long long int edges,nodes;
void dfs(int node)
{
    vis[node]=1;
    ++nodes;
    edges+=v[node].size();
    for(int j=0;j<v[node].size();++j)
    {
        if(!vis[v[node][j]])
        {
          dfs(v[node][j]);
        }

    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    for(int i=1;i<=n;++i)
    {
         if(!vis[i])
         {
             dfs(i);
             if(!(nodes*(nodes-1)==edges))
             {
                 cout<<"NO";
                 return 0;
             }
         }

         edges=0;
         nodes=0;
    }
    cout<<"YES";


    return 0;
}
