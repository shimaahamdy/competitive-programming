#include <iostream>

using namespace std;
const int MAX_COIN=8000,index=5;
int coins[index]={1,5,10,25,50};
int dp[index][MAX_COIN];
int main()
{
    int x;
    for(int i=0;i<index;++i)dp[i][0]=1;
    for(int coin=1;coin<MAX_COIN;++coin)
    {
        for(int j=0;j<index;++j)
        {
            if(j)
                dp[j][coin]=dp[j-1][coin];
            if(coin-coins[j]>=0)
                dp[j][coin]+=dp[j][coin-coins[j]];
        }
    }
    while(cin>>x)
      cout<<dp[4][x]<<"\n";
    return 0;
}
