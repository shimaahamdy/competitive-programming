#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,b1,b2,n,cards=0,mn=0,mx=0;
    scanf("%d%d%d%d%d",&a1,&a2,&b1,&b2,&n);
    if(b1<b2)
    {
        int t=b1;
        b1=b2;
        b2=t;
        t=a1;
        a1=a2;
        a2=t;
    }
    cards=(b1-1)*a1+(b2-1)*a2;

    if(cards>=n)mn=0;
    else mn=n-cards;

    mx=(n/b2);
    if(mx>a2)
    mx=a2;
        else
      mx=n/b2;

    cards=n-mx*b2;
        mx+=(cards/b1);


    cout<<mn<<" "<<mx;





    return 0;
}
