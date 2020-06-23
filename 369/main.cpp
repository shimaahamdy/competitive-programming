#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int comb[101][101];
void combNum()
{
    comb[1][0]=comb[1][1]=comb[0][0]=1;
    for(int i=2;i<101;++i)
    {
        comb[i][0]=1;
        for(int j=1;j<=i;++j)
        {
            comb[i][j]=comb[i-1][j]+comb[i-1][j-1];
        }
    }

}
int main()
{
    int n,m;string s;
    combNum();
   while(cin>>n>>m)
   {
       if(n==0 && m==0)break;
       printf("%d things taken %d at a time is %lld exactly.\n", n, m, comb[n][m]);
   }
    return 0;
}
