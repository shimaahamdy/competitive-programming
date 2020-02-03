#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     
    long long int sum=0,n,x,arr[100050];;
    cin>>n>>x;
    for(int i=0;i<n;++i)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;++i)
    {
        if(x==1)sum+=arr[i];
        else{
            sum+=arr[i]*x;
            --x;
        }
    }
    cout<<sum;
    return 0;
}
