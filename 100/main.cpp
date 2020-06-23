#include <iostream>

using namespace std;

long long int rec(long long int n)
{
    if(n==1)return 1;
    if(n%2)return 1+rec(3*n+1);
    else return 1+rec(n/2);

}

long long int getmax(long long int a,long long int b)
{
    long long int mx=0;
    for(long long int k=a;k<=b;++k)
        mx=max(rec(k),mx);
    return mx;
}

int main()
{

    long long int i,j;
    while(cin>>i>>j)
    {
        long long int res=0;
        if(i>j)res=getmax(j,i);
        else res=getmax(i,j);
        cout<<i<<" "<<j<<" "<<res<<"\n";
    }
    return 0;
}
