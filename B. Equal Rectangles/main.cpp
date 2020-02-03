#include <bits/stdc++.h>
using namespace std;
int arr[405];
int main()
{
    int q,n;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        for(int i=0;i<4*n;++i)scanf("%d",&arr[i]);
        sort(arr,arr+4*n);
        int area=arr[0]*arr[4*n-1];

    }
    return 0;
}
