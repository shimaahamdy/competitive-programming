#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>heights;
int ans[25050][2];
int main()
{

   cin>>n;
   for(int i=0;i<n;++i)
   {
       int temp;
       cin>>temp;
       heights.push_back(temp);
   }
   int q;
   cin>>q;
   vector<int>::iterator bigger,smaller;

   for(int i=0;i<q;++i)
   {
       int temp;
       cin>>temp;
       bigger=upper_bound(heights.begin(),heights.end(),temp);
       smaller=lower_bound(heights.begin(),heights.end(),temp);
        if (bigger!=heights.end())ans[i][1]=*bigger;
        else ans[i][1]=0;
      if(smaller!=heights.end()&& smaller!=heights.begin())ans[i][0]=*(smaller-1);
      else if(smaller==heights.end())ans[i][0]=heights[n-1];
      else ans[i][0]=0;

   }
   for(int i=0;i<q;++i)
   {
       if(ans[i][0])cout<<ans[i][0]<<" ";
       else cout<<"X ";
       if(ans[i][1])cout<<ans[i][1];
       else cout<<"X";
       cout<<"\n";
   }
    return 0;
}
