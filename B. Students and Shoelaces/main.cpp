#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>graph[150];
bool vis[150];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
int groubs=0;
while(true)
{
    vector<int>v;
    for(int i=1;i<=n;++i)
    {
        if(vis[i])continue;
       int siz=graph[i].size();
       int num=0;
       for(int j=0;j<siz;++j)
       {

           if(!vis[graph[i][j]])
           ++num;

       }


       if(num==1)
          {
              v.push_back(i);
		  }

}

int siz=v.size();
if(!siz)break;
    else ++groubs;
    for(int i=0;i<siz;++i)
    {
    	vis[v[i]]=1;
    }
}
cout<<groubs;
    return 0;
}
