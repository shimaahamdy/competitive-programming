#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int main()
{
   int q,n;
    bool ans[205];
   scanf("%d",&q);
    for(int k=0;k<q;++k)
    {
        scanf("%d",&n);
        int arr[205],x;
        bool vaild=true;
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&x);
            arr[x]=i;
        }
        arr[n+1]=arr[1];
        for(int i=2;i<=n;++i)
        {

            int dif1=abs(arr[i-1]-arr[i]);
            int dif2=abs(arr[i]-arr[i+1]);
            //cout<<dif1<<" "<<dif2<<"\n";
            if((dif1==1 && dif2 ==1)||(dif1==1 && dif2==n-1)||(dif1==n-1 && dif2==1))continue;
               vaild=false;
                break;

        }
        ans[k]=vaild;
    }
    for(int i=0;i<q;++i)
       {
           if(ans[i])cout<<"YES\n";
          else cout<<"NO\n";
       }
    return 0;
}
