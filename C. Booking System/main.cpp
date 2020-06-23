#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct group
{
public:
    int siz;
    int money;
    int id;

};
struct table
{
public:
    int siz;
    int id;
};
bool sortDecMon( const group &g1,const group &g2)
{
    return g1.money>g2.money;
}
bool sortSiz(const table &t1,const table &t2)
{
    return t1.siz<t2.siz;
}
bool bySiz(const table &t,const group &g)
{
    return t.siz<g.siz;
}
int main()
{
    int n,sum=0,k;
    scanf("%d",&n);
    vector<group>groups(n);
    vector<pair<int,int> >ans;
    for(int i=0;i<n;++i)
    {
        groups[i].id=i+1;
        cin>>groups[i].siz>>groups[i].money;
    }
    scanf("%d",&k);
    vector<table>tables(k);
    for(int i=0;i<k;++i)
        {
            cin>>tables[i].siz;
            tables[i].id=i+1;
        }
    sort(groups.begin(),groups.end(),sortDecMon);
    sort(tables.begin(),tables.end(),sortSiz);
    vector<table>::iterator it;
    for(int i=0;i<n;++i)
    {
        group g1=groups[i];
         it = lower_bound(tables.begin(),tables.end(),g1,bySiz);
        if(it==tables.end())continue;
        ans.push_back({g1.id,it->id});
        sum+=g1.money;
        tables.erase(it);
    }
   int sz=ans.size();
   cout<<sz<<" "<<sum<<"\n";
   for(int i=0;i<sz;++i)
    cout<<ans[i].first<<" "<<ans[i].second<<"\n";

    return 0;
}
