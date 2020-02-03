#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r1=0,r2=0,q1=0,a,b,temp;
    int x,y,z;
    vector<double>v;
    cin>>x;
    for(int i=0;i<x;++i)
    {

        cin>>temp;
        if(temp>r1)r1=temp;
    }
    cin>>y;
    for(int i=0;i<y;++i)
    {

        cin>>temp;
        if(temp>q1)q1=temp;
    }
    cin>>z;
    for(int i=0;i<z;++i)
    {

        cin>>temp;
        v.push_back(temp);
    }
    cin>>a>>b;
    double k=a/b;
    for(int i=0;i<z;++i)
    {
        double sum=(q1*r1*r1)/(q1+k*v[i]);
        if(sum>r2)r2=sum;

     }
            cout<<fixed<<setprecision(12)<<sqrt(r2);

  return 0;

}
