#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int maxsiz=300050;
bool holes[maxsiz];
int main()
{
    int pos=1;
    bool drwaned=false;
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;++i)
    {
        int x;
        cin>>x;
        holes[x]=1;
    }
    for(int i=0;i<k;++i)
    {
        int u,v;
        cin>>u>>v;
        if(drwaned)continue;
        if(pos==u && holes[v])
        {
            drwaned=true;
            pos=v;
        }
        else if(pos==v && holes[u])
        {
            drwaned=true;
            pos=u;
        }
        else if(pos==u)pos=v;
        else if(pos==v)pos=u;
    }
    cout<<pos;
    return 0;
}
