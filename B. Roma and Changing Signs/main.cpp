#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n,k;
    long long int sum=0;
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>arr[i];

    for(int i=0;i<n;++i)
    {
        if(arr[i]<0 && k)
        {
            arr[i]=arr[i]*-1;
            --k;
        }
        else break;
    }
    if(k)
    {
        sort(arr,arr+n);
        if(k%2!=0)arr[0]=arr[0]*-1;
    }
    for(int i=0;i<n;++i)sum+=arr[i];
    cout<<sum;
    return 0;
}
