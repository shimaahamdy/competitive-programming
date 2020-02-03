#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,prev;
    long long int ways=1;;
    bool one=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&a);
        if(a==1 && one)
        {
            ways*=i-prev;
            prev=i;
        }
        else if(a==1)
        {
            one=1;
            prev=i;
        }

    }
    if(one)cout<<ways;
    else cout<<0;
    return 0;
}
