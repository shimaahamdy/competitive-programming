#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX=100005;
pair<int,int> arr[MAX];

int main()
{
    int n,x,sum=0;
    for(int i=0;i<MAX;++i)arr[i].second=-1;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&x);
         if(arr[x].first==-1)continue;
        if(arr[x].second==-1)
           {
            arr[x].second=0;
            arr[x].first=i;
           }


         else if(arr[x].second==0)
         {
             arr[x].second=i-arr[x].first;
             arr[x].first=i;
         }
         else
         {
             if(i-arr[x].first==arr[x].second)
                arr[x].first=i;
             else
                arr[x].first=-1;



         }
    }
    for(int i=1;i<MAX;++i)
    {
        if(arr[i].first==-1 || arr[i].second==-1)continue;
        ++sum;

    }
    cout<<sum<<"\n";
    for(int i=1;i<MAX;++i)
    {
        if(arr[i].first==-1 || arr[i].second==-1)continue;
        cout<<i<<" "<<arr[i].second<<"\n";
    }

    return 0;
}
