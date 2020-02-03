#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>graph[150];
vector<int>order;
bool vis[150];
void dfs(int node)
{
    vis[node]=1;
    for(int j=0;j<graph[node].size();++j)
    {
        if(vis[graph[node][j]])continue;
        dfs(graph[node][j]);
    }

    order.push_back(node);


}
void cleardata()
{
    for(int i=0;i<150;++i)
    {
       graph[i].clear();
       vis[i]=false;
    }
    order.clear();
}
int main()
{
    int n,m;
    while(cin>>n>>m,n)
    {
        cleardata();
        for(int k=0;k<m;++k)
        {
            int i,j;
            cin>>i>>j;
            graph[i].push_back(j);

        }
        for(int i=1;i<=n;++i)
        {
           if(vis[i])continue;
           dfs(i);
        }
        int siz=order.size();
        for (int i = siz-1; i >= 0; --i)
			cout << order[i] <<" ";
			cout<<"\n";
    }

    return 0;
}
