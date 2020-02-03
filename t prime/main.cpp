#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n=1000010;
bool arr[1000010]={0};
void seive()
{
	for(int i=2;i*i<n;i++)
	{
		if(!arr[i])
		{
			for(int j=i*i;j<n;j+=i)arr[j]=true;
		}
	}
}

int main(int argc, char** argv) {
	seive();
	int n=0;long long int x=0,t=0;bool ans[100005];
	arr[1]=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		t=sqrt(x);
		if(t*t==x)
		{
			if(!arr[t])ans[i]=1;
			else ans[i]=0;
		}
		else ans[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(ans[i])cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
