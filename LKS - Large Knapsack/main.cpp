#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[2][2000005];
int main()
{
    int n,k;
    pair<int,int>arr[505];
    cin>>k>>n;
    for(int i=1;i<=n;++i)
        cin>>arr[i].first>>arr[i].second;

    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=k;++j)
        {
            if(j>=arr[i].second)
            {
            //	cout<<i<<"  "<<j<<"  "<<dp[0][j]<<"  "<<arr[i].first<<"  "<<dp[0][j-arr[i].second]<<"\n";
                dp[1][j]=max(dp[0][j],arr[i].first+dp[0][j-arr[i].second]);
            }
            
        
		
		}
		for(int j=1;j<=k;++j)
		      dp[0][j]=dp[1][j];
        
    }

    
        
    cout<<dp[0][k];
    return 0;
}
