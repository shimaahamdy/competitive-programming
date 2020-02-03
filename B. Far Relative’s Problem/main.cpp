#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,r1=0,r2=0;char gend;int f[400]={0},m[400]={0};
	cin>>n;
	while(n--)
	{
		cin>>gend>>r1>>r2;
		if(gend=='M')
		{
			m[r1]+=1;
			m[r2+1]-=1;
		}
		else 
		{
			f[r1]+=1;
			f[r2+1]-=1;
		}
		
	}
	for(int i=2;i<=400;i++)
	{
		m[i]=m[i]+m[i-1];
		f[i]=f[i]+f[i-1];
	}
	for(int i=1;i<=400;i++)
	{
		if(m[i]<=f[i])m[i]=m[i]*2;
		else m[i]=f[i]*2;
	}
	cout<<*max_element(m,m+400);
	return 0;
}
