#include <iostream>

using namespace std;

int main()
{
    int minm,sum,n;
    cin>>n;
    minm=2+2*n;
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            minm=min(minm,2*i+2*(n/i));
        }
    }
    cout<<minm;
    return 0;
}
