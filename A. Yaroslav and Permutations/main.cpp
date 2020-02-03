#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int arr[1005]={0},n=0,mx=0,sum=0;
 cin>>n;
 for(int j=0;j<n;++j)
 {
     int x;
     scanf("%d",&x);
     arr[x]++;
 }
   for(int i=0;i<1001;++i)
   {
       if(arr[i]>mx)
           mx=arr[i];

      sum+=arr[i];
   }
   sum=sum-mx;

   if(sum>=mx || mx-sum==1 )cout<<"YES";
   else cout<<"NO";
    return 0;
}
