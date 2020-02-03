#include <iostream>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {

    int c,m,x,teams;

       teams=0;
       cin>>c>>m>>x;
    while(c+m+x>=3 && c && m)
    {
       if(x)
       {
           x--;
           c--;
           m--;
           ++teams;
       }
       else if(c>m)
       {
           c-=2;
           --m;
           ++teams;
       }
       else
       {
           m-=2;
           --c;
           ++teams;
       }

    }
    cout<<teams<<"\n";
    }

    return 0;
}
