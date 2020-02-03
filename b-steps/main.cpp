#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int xc,yc,dx,dy,n,m;

bool vaild(int step)
{
    long long int t1= (long long int) step*dx+xc;
    long long int t2=(long long int) step*dy+yc;
    if(t1>=1 && t1<=n && t2>=1 && t2<=m)return true;
    return false;
}
long long int ma()
{
     int l=0,h=1000000010,mid=0;
    while(l<h)
    {
        mid=l+(h-l+1)/2;

        if(vaild(mid))
            l=mid;
        else h=mid-1;

    }
    return l;
}
int main()
{
    int k;
    long long int steps=0;
    scanf("%d%d%d%d%d",&n,&m,&xc,&yc,&k);
    while(k--)
    {
        scanf("%d%d",&dx,&dy);
        long long int m=ma();
        steps+=m;
        xc=m*dx+xc;
        yc=m*dy+yc;
    }
   cout<<steps;
    return 0;
}
