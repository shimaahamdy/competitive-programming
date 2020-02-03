#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector< pair<int,int> >arr;
int main()
{
   int n,a,b;
   cin>>n;
   for(int i=0;i<n;++i)
   {
       cin>>a>>b;
       arr.push_back(make_pair(a,b));
   }
   sort(arr.begin(),arr.end());
   for(int i=0;i<n-1;)
   {
       if(arr[i].second>=arr[i+1].second)
       {
           cout<<"Happy Alex";
           return 0;
       }
       else ++i;
   }
   cout<<"Poor Alex";

    return 0;
}
