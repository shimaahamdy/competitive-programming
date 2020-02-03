#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE=5050;
int n;
int arr[MAX_SIZE];
int mem[MAX_SIZE][MAX_SIZE];
int dp(int i,int prev)
{
    if(i>n)
        return 0;
     int &mx=mem[i][prev];

     if(mx!=-1)return mx;

    int ch1=dp(i+1,prev);
     int ch2=0;
    if((abs(arr[i])>abs(arr[prev])) && ((-arr[i]<=0 && arr[prev]<=0)||(-arr[i]>=0 && arr[prev]>=0)))
        ch2=dp(i+1,i)+1;

    mx= max(ch1,ch2);
    return mx;
}

int main()
{

    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>arr[i];

    for(int i=0;i<MAX_SIZE;++i)
        for(int j=0;j<MAX_SIZE;++j)
            mem[i][j]=-1;
    cout<<dp(1,0);
    return 0;
}
