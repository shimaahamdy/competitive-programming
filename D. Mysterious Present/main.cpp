#include<bits/stdc++.h>
using namespace std;
int n,w[5005],h[5005],Next[5005],dp[5005];
int go(int p)
{
	if(dp[p]) return dp[p];
	dp[p]=1;
	for(int i=0;i<=n;i++)
		if(w[p]<w[i]&&h[p]<h[i]&&dp[p]<go(i)+1)
		{
			dp[p]=dp[i]+1;
			Next[p]=i;
		}
	return dp[p];
}
int main()
{
	n=3;
	for(int i=0;i<=n;i++)
     Next[i]=-1;

	w[0]=3,h[0]=3;
	w[1]=5,h[1]=4;
	w[2]=12,h[2]=11;
	w[3]=9,h[3]=8;
	go(0);
	cout<<dp[0]-1<<endl;
	for(int i=Next[0];i!=-1;i=Next[i])
		cout<<i<<' ';
	cout<<endl;


return 0;
}
