#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vq,vd,f,c,sum=0;
    double d,t;
    cin>>vq>>vd>>t>>f>>c;
    d=t*vq;
    double x=(vq*d)/(vd-vq);
    d+=x;

    while(d<c && d>0)
    {
        ++sum;
        t=d/vd+f;
        d+=t*vq;
        x=(vq*d)/(vd-vq);
        d+=x;

    }
    cout<<sum;
    return 0;
}
