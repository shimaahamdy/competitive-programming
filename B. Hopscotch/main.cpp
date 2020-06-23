#include <iostream>

using namespace std;

int main()
{

    int y,x,a;
    cin>>a>>x>>y;
    if(x<0)x*=-1;
    //cout<<x;
    if(y%a==0)
        cout<<-1;
    else
    {
        double newa= double(a)/2;
        int level=y/a+1;
        if(level==1 && x <newa)
            cout<<1;
        else if(level%2==1 && level!=1 && x>0 && x<a)
            cout<<1+1+((level)/2)+2*((level)/2-1)<<"odd";
        else if(level%2==0 && level!=1 && x<newa)
            cout<<1+((level)/2)+2*((level)/2-1);
        else cout<<-1;
    }
    return 0;
}
