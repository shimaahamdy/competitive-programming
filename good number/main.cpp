#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0;
    long long int s;
    cin>>n>>k;
    int t=n;
    while(n--)
    {
        int arr[10]={0};
        cin>>s;
        while(s!=0)
        {
            arr[s%10]=1;
            s/=10;
        }
        for(int i=0;i<=k;++i)
        {
           if(!arr[i]){++c;break;}
        }
    }
cout<<t-c;
    return 0;
}
