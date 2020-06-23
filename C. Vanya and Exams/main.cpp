#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int grades=0,sum=0,ans=0,mx,avg;
    cin>>n>>mx>>avg;
    vector<pair<int,int> >exams(n);
    for(int i=0;i<n;++i)
        {
            scanf("%d%d",&exams[i].second,&exams[i].first);
            grades+=exams[i].second;
        }
    sort(exams.begin(),exams.end());
    sum=n*avg;
    if (grades>=sum)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        if(exams[i].second>=mx)continue;
        if(mx-exams[i].second+grades<sum)
        {
            ans+=(mx-exams[i].second)*exams[i].first;
            grades+=(mx-exams[i].second);
        }
        else
        {
            ans+=(long long )((sum-grades)*exams[i].first);
            break;
        }


    }

   cout<<ans;

    return 0;
}
