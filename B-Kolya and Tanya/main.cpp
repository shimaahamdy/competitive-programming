#include <iostream>

using namespace std;

int main()
{
    long long int n,sumall=1,sumNo=1,mod=1000000007;
    cin>>n;
    for(int i=0;i<3*n;++i)
    {
        sumall=((sumall%mod)*3)%mod;
       // cout<<sum<<"\n";
       if(i<n)sumNo=((sumNo%mod)*7)%mod;
    }
    cout<<(sumall-sumNo+mod)%mod;
    return 0;
}
