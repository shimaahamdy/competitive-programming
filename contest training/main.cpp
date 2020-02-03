#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const long long int n=100000050;
long long int arr[n],test[n];
void seive()
{
	for(long long int i=2;i*i<n;i++)
	{
		if(!arr[i])
		{
			arr[i]=i;
			for(long long int j=i*2;j<n;j+=i)
			{
				if(!arr[j])arr[j]=i;
			}
		}
	}
}
int main(int argc, char** argv) {
	seive();
	long long int x=2,i=0,size=0;

	while(x!=0)
	{
		
		cin>>x;
		test[i]=x;
		i++;
		size++;
	}
	
	for(int k=0;k<size;k++)
	{
		if(test[k]!=0)
		{
			cout<<arr[test[k]]<<"\n";
		}
	}
	return 0;
}


