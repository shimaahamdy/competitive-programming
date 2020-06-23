#include <iostream>

using namespace std;

int main()
{
    int n,k,l,r,sa,sk;
    int arr[1005],sumk=0,suma=0;
    cin>>n>>k>>l>>r>>sa>>sk;

    sumk=k*r;
    suma=(n-k)*r;
    for(int i=0;i<n;++i)
        arr[i]=r;

    int i=0;
    while(sumk!=sk)
    {
        arr[i%k]--;
        sumk--;
        ++i;
    }
    i=k;
    while(suma!=(sa-sk))
    {
        arr[i]--;
        suma--;
        ++i;
        if(i>=n)i=k;
    }
    for(int i=0;i<n;++i)cout<<arr[i]<<" ";
    return 0;
}
