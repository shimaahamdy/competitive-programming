#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,s;
long long int mem[70][70][3];
long long int dp(int i,int secur,int prev)
{
    if(i>n)
    {
        if(secur==s)return 1;
        return 0;
    }
    long long int &sum=mem[i][secur][prev];
    if(sum!=-1)
        return sum;


    long long int ch1=dp(i+1,prev!=0?secur+1:secur,1);
    long long int ch2=dp(i+1,secur,0);

     sum=ch1+ch2;
     return sum;
}
void clrdata()
{
    for(int i=0;i<70;++i)
        for(int j=0;j<70;++j)
           mem[i][j][0]=mem[i][j][1]=mem[i][j][2]=-1;
}
int main()
{
    while(cin>>n>>s)
    {
        if(n<0)break;
        clrdata();
        cout<<dp(1,0,2)<<"\n";
    }
         return 0;
}
