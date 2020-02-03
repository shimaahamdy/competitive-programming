#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int k=0,size=0, arr[200005]={0},sum=0;
	map<int,pair<int,int> >m;
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d",&size);
		sum=0;
		for(int j=1;j<=size;j++)
		{
			scanf("%d",&arr[j]);
			sum+=arr[j];
		}
		for(int j=1;j<=size;j++)
		{
			if(m.count(sum-arr[j])>0 && m[sum-arr[j]].first!=i && i!=j)
			{
				cout<<"YES\n"<<i<<" "<<j<<"\n"<<m[sum-arr[j]].first<<" "<<m[sum-arr[j]].second;
				return 0;
			}
			else 
			{
				m[sum-arr[j]]=make_pair(i,j);
			}
		}
	}
	cout<<"NO";
	return 0;
}

