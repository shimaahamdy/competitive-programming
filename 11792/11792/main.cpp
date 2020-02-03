#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    vector<int>graph[150];
   bool vis[150][150]={0};
   int intersect[150]={0};
   int n,s;
    cin>>n>>s;
    for(int i=0;i<s;++i)
    {
        int x,p=0,c=0;
        while(cin>>x,x)
        {

        intersect[x]++;
        c=x;
        if(p && !vis[p][c] && !vis[c][p])
        {
            graph[p].push_back(c);
            graph[c].push_back(p);
            vis[p][c]=true;
            vis[c][p]=true;

        }
        p=c;
        }

    }
     vector<int>impnode;
    for(int i=1;i<=n;++i)
    {
        if(intersect[i]>1)impnode.push_back(i);
    }
    int ans[150]={0};
    for(int i=0;i<impnode.size()-1;++i){
        for(int j=i+1;j<impnode.size();++j)
    {
        bool qvis[150]={0};
        queue<int>q;
        int times[150]={0};
        qvis[impnode[i]]=true;
        q.push(impnode[i]);
        while(!q.empty())
        {
            int v=q.front();
            q.pop();
            if(v==impnode[j])
            {
                ans[impnode[i]]+=times[v];
                ans[v]+=times[v];
                break;

            }
            for(int k=0;k<graph[v].size();++k)
            {
                if(qvis[graph[v][k]])continue;
                qvis[graph[v][k]]=1;
                times[graph[v][k]]=times[v]+1;
                q.push(graph[v][k]);

            }
        }

    }
    }
    int minm=ans[impnode[0]],indx=impnode[0];
   for(int i=1;i<impnode.size();++i)
    {
        if(ans[impnode[i]]<minm)
        {
            minm=ans[impnode[i]];
            indx=impnode[i];

        }
    }
    cout<<"Krochanska is in: "<<indx<<endl;
    }
    return 0;
}
