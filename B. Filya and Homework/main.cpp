#include <iostream>
#include <bits/stdc++.h>
using namespace std;
set<int>arr;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        arr.insert(x);
    }
    if(arr.size()>3)cout<<"NO";
    else if(arr.size()<=2)cout<<"YES";
    else
    {
       set<int>:: iterator it;
       int i=0;
       int x,y,z;
         for(it=arr.begin();it!=arr.end();++it)
         {
             if(i==0)x=*it;
             else if(i==1)y=*it;
             else z=*it;
             ++i;
         }
         if(x-y == y-z)cout<<"YES";
         else cout<<"NO";
    }

    return 0;
}
