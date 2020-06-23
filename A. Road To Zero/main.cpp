#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   cin>>t;
    while(t--)
    {
        long long int a,b,x,y,sum=0;
        cin>>x>>y>>a>>b;
        if(x>y)swap(x,y);
       if(x==0)
       {
           sum+=y*a;
       }
       else if(y==0)
        sum+=x*a;
       else
       {
           int ch1=x*b+(y-x)*a;
           int ch2=x*a+y*a;
           if(ch1<ch2)sum+=ch1;
           else sum+=ch2;

       }
       cout<<sum<<"\n";
    }
    return 0;
}
