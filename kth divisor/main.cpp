#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
vector <long long int>v;
long long int  size=0;
void divsor(long long int n)
{
	long long int  i;
	for(i=1;i*i<n;++i)
	{
		if(n%i==0)
		{
			v.push_back(i);
			v.push_back(n/i);
			size+=2;
		}
	}
	if(i*i==n)
	{
		v.push_back(i);
		size++;
	}
}
int main(int argc, char** argv) {
	long long int n=0,k=0;
	scanf("%lld %lld",&n,&k);
	divsor(n);
	sort(v.begin(),v.end());
	if((k-1)<size)cout<<v[k-1];
	else cout<<-1;
	
	
	return 0;
}
