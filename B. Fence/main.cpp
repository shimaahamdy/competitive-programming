#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,h,sum=0,minm,j=0;
    vector<int>arr;
    cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        cin>>h;
        arr.push_back(h);
    }
    for(int i=0;i<k;++i)sum+=arr[i];
    minm=sum;
    for(int i=0;i<n && (n-1-i)>=k;++i)
    {
        sum=sum-arr[i]+arr[i+k];
        if(sum<minm)
        {
            minm=sum;
            j=i+1;
        }
    }
    cout<<j+1;
    return 0;
}
