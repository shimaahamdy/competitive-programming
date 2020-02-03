#include <iostream>

using namespace std;

int main()
{
    int n,k,arr[250];
    cin>>n>>k;
    n=2*n+1;
    for(int i=1;i<=n;++i)cin>>arr[i];
    for(int i=1;i<=n;++i)
    {
        if(i%2==0 && k && arr[i]-1>arr[i-1] && arr[i]-1>arr[i+1])
        {
            --k;
            cout<<arr[i]-1<<" ";
        }
        else cout<<arr[i]<<" ";
    }
    return 0;
}
