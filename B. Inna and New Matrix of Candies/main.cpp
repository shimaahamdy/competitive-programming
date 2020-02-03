#include <iostream>
#include <bits/stdc++.h>
using namespace std;
set<int>steps;
int main()
{
    int n,m;
    char c;
    bool possible=true;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        int g=0,s=0;
        for(int j=1;j<=m;++j)
    {
        cin>>c;
        if(c=='G')g=j;
        else if(c=='S')s=j;
    }
    if(s<g)possible=false;
    else steps.insert(s-g);
    }
    if(!possible)cout<<-1;
    else cout<<steps.size();
    return 0;
}
