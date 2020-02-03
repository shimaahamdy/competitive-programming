#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int tot[55],l[55],r[55],m[55];
int main()
{
   int n,k,x;
   scanf("%d %d",&n,&k);
   for(int i=1;i<=n;++i)
   {
       int len;
       cin>>len;
       int mx=-(1<<30);
       int sum=0;
       for(int j=0;j<len;++j)
       {
           scanf("%d",&x);
           tot[i]+=x;
           l[i]=max(l[i],tot[i]);
           r[i]=min(r[i],tot[i]);
           sum=max(sum+x,x);
           mx=max(mx,sum);
       }
       m[i]=mx;
       r[i]=tot[i]-r[i];
   }
   long long int cur=0;
   long long int best= (long long int)-(1e18);
   while(k--)
   {

       scanf("%d",&x);
       best=max(best,m[x]);
       if(cur)
        best=max(cur+l[x],best);
       cur=max(r[x],cur+tot[x]);
   }
   cout<<best;

    return 0;
}
