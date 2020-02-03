#include <bits/stdc++.h>

using namespace std;
const double pi=3.141592654;
int main()
{
    int d,h,v,e;
    scanf("%d%d%d%d",&d,&h,&v,&e);
    v=-1*v;
    double area=(d/2.0)*(d/2.0)*pi;
    double increase=area*e;
    increase=increase+v;
    if(increase>=0)cout<<"NO";
    else
    {
        cout<<"YES\n";
         cout<<fixed<<setprecision(12)<<(area*h)/(-1*increase);
    }

    return 0;
}
