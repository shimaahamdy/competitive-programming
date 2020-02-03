#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n,n)
    {
        int midpoint=n/2;
        vector<pair<int,int> >v;
        for(int i=0;i<n;++i)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }

        int xo=v[midpoint].first;
        int yo=v[midpoint].second;
        int firstplayer=0,secondplayer=0;
        for(int i=0;i<n;++i)
        {
           int x=v[i].first;
           int y=v[i].second;
           if(x==xo || y==yo)continue;
           if(x>xo && y>yo)++firstplayer;
           else if(x>xo && y<yo)++secondplayer;
           else if(x<xo && y>yo)++secondplayer;
           else ++firstplayer;
        }
        cout<<firstplayer<<" "<<secondplayer;
    }
    return 0;
}
