#include <bits/stdc++.h>

using namespace std;

int main()
{
    int even=0,odd=0,n,m,a,sum=0;
    scanf("%d%d",&n,&m);
    while(n--)
    {
        scanf("%d",&a);
        if(a%2==0)even++;
        else odd++;
    }
    while(m--)
    {
        scanf("%d",&a);
        if(a%2==0 && odd)
        {
            ++sum;
            --odd;
        }
        else if(a&2!=0 && even)
        {
            ++sum;
            --even;
        }
    }
    cout<<sum;
    return 0;
}
