#include <iostream>

using namespace std;

int main()
{
    int l,r,a,sum=0;
    bool left=0;
    bool right=0;

    cin>>l>>r>>a;
    if(l<r)
    {
        sum+=2*l;
        r=r-l;
        l=0;
        left=1;

    }
    else
    {
        sum+=2*r;
        l=l-r;
        r=0;
        right=1;

    }


        if(left)
        {
            if(r<a)
            {
                sum+=2*r;
                a=a-r;
                r=0;
            }
            else
            {
                sum+=2*a;
                r=r-a;
                a=0;
            }

        }
        else
        {
            if(l<a)
            {
                sum+=2*l;
                a=a-l;
                l=0;
            }
            else
            {
                sum+=2*a;
                l=l-a;
                a=0;
            }

        }


       sum+=(a/2)*2;

    cout<<sum;
    return 0;
}
