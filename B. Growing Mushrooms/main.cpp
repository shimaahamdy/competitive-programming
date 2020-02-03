#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<pair<double,int> >result;
int main()
{
    int n,t1,t2,v,u,k;
    scanf("%d%d%d%d",&n,&t1,&t2,&k);
    double c=(100-k)/100.0;

    for(int i=1;i<=n;++i)
    {
         scanf("%d%d",&v,&u);
         double ch1=v*t1*c+u*t2;
         double ch2=u*t1*c+v*t2;

        result.push_back(make_pair(-max(ch1,ch2),i));
    }
    sort(result.begin(),result.end());

   for(int i=0;i<n;++i)cout<<result[i].second<<" "<<fixed<<setprecision(2)<<-1*result[i].first<<"\n";
    return 0;
}
