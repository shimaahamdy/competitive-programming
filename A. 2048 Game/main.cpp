#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q,n,x;
    scanf("%d",&q);
    while(q--)
    {
     int arr[2050]={0};
     scanf("%d",&n);
     for(int i=0;i<n;++i)
     {
         scanf("%d",&x);
         if(x<=2048)arr[x]++;
     }
     for(int i=1;i<2048;i*=2)
     {
         int times=arr[i]/2;
         while(times--)
         {
             arr[i*2]++;
         }
     }
     if(arr[2048])cout<<"YES\n";
     else cout<<"NO\n";
    }
    return 0;
}
