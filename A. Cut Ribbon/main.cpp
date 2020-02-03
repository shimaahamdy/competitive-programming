#include <iostream>

using namespace std;
int n,a,b,c;
const int oo=-5000000;
int mem[4005];
int dp(int rem)
{
    if(rem==0)return 0;
     if(rem<0)return oo;

    int &mx=mem[rem];

    if(mx!=-1)return mx;



     int ch1=dp(rem-a);

     int ch2=dp(rem-b);

     int ch3=dp(rem-c);


    mx=max(ch1,max(ch2,ch3))+1;

    return mx;
}
int main()
{
    cin>>n>>a>>b>>c;

    for(int i=0;i<4005;++i)mem[i]=-1;
    cout<<dp(n);
    return 0;
}
