#include <iostream>

using namespace std;
int dp[2050][2050];
int main()
{
    string a,b;int siz1,siz2,t;
    cin>>t;
    while(t--)
    {
     cin>>a>>b;
    siz1=a.size();
    siz2=b.size();

    for(int i=0;i<=siz2;++i)
        dp[i][0]=i;
    for(int j=0;j<=siz1;++j)
        dp[0][j]=j;
    for(int i=1;i<=siz2;++i)
    {
        for(int j=1;j<=siz1;++j)
        {
            if(a[j-1]==b[i-1])dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
        }

    }
    cout<<dp[siz2][siz1]<<"\n";
    }
   return 0;
}
