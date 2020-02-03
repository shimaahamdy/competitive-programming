#include <iostream>
#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> >q;

set<pair<int,int> >graph;
map<pair<int,int>,int>vis;

int xo,x,yo,y;
int bfs()
{
    int di[8]={-1,1,0,0,-1,-1,1,1};
    int dj[8]={0,0,1,-1,1,-1,-1,1};

    int dep=0;
    pair<int,int>cur;
    pair<int,int>temp;
    q.push(make_pair(xo,yo));
    cur.first=xo;
    cur.second=yo;
    vis[cur]=dep;
    while(!q.empty())
    {
        cur=q.front();
        q.pop();

        for(int i=0;i<8;++i)
        {
            int newi=cur.first+di[i];
            int newj=cur.second+dj[i];

            temp.first=newi;
            temp.second=newj;
            if(!graph.count(temp) || vis.count(temp))continue;
            vis[temp]=vis[cur]+1;
            q.push(temp);
            if(temp.first==x && temp.second==y)
            {
                return vis[temp];

            }
        }


    }

    return -1;

}

int main()
{
    cin>>xo>>yo>>x>>y;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int r,c1,c2;
        cin>>r>>c1>>c2;
        for(int j=c1;j<=c2;++j)graph.insert({r,j});
         }
    cout<<bfs();
    return 0;
}
