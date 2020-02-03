#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int siz;
    cin>>siz;
    for(int i=0;i<siz;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
   sort(v.begin(),v.end());
    for(int i=0;i<siz-2;++i)
    {
        int sum=v[i]+v[i+1];
        if(v[i+2]<sum)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}
