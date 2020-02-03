#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,r,l,x=0;
    cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        cin>>r>>l;
        x+=abs(l-r)+1;
    }
    for(long long int i=0;;++i)
    {
        if((x+i)%k==0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
