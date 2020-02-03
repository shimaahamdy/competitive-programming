#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
vector<bool>arr(20000000,0);
vector<long long int>prim;
long long int ans[100010];
void seive()
{
	for(long long int i=2;i<20000000;i++)
	{
		if(!arr[i])
		{
			prim.push_back(i);
			for(long long int j=i*i;j<20000000;j+=i)arr[j]=1;
		}
	}
}
void twin_prim()
{
	for(int i=0,k=0;k<100005;i++)
	{
		if(!arr[prim[i]+2])
		{
			ans[k]=prim[i];
			k++;
		}
	}
}
int main(int argc, char** argv) {
	seive();
	twin_prim();
	long long int x=0,size=1,test[1005];
	while(cin>>x)
	{
		test[size]=x;
		size++;
	}
	for(int i=1;i<size;i++)
	{
		cout<<"("<<ans[test[i]-1]<<", "<<ans[test[i]-1]+2<<")\n";
	}
	return 0;
}
