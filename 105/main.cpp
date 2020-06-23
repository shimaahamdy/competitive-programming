#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int skyline[10050];
int main()
{
    int L,H,R,maxR=0,minL=10050,height;
    while(cin>>L>>H>>R)
    {
        if(L<minL)minL=L;
        if(R>maxR)maxR=R;

        for(int i=L;i<R;++i)
        {
            if(skyline[i]>H)continue;
            skyline[i]=H;
        }
    }
    height=skyline[minL];
    cout<<minL<<" "<<height;
    for(int i=minL;i<=maxR;++i)
    {
        if(height==skyline[i])continue;
        cout<<" "<<i<<" "<<skyline[i];
        height=skyline[i];
    }
    cout<<"\n";
    return 0;
}
