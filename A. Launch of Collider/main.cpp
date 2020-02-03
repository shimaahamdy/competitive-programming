#include <iostream>

using namespace std;

int main()
{
    string s;int n,r=-1,l=-1,ans=1000000005;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='R')cin>>r;
        else cin>>l;
        if(l-r>0 && l!=-1 && r!=-1)
        {
         ans=min(ans,(l-r)/2);

        }
    }
    if(ans>=1000000005)cout<<-1;
    else cout<<ans;
    return 0;
    }
