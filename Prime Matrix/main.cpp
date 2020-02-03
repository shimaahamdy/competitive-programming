#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool arr[100005];
vector<int>prim;
vector<int>::iterator it;
long long int matrix[505][505],min_row=10000000,min_coulm=10000000,m=0,n=0;
void seive()
{
	for(long long int i=2;i<100005;i++)
	{
		if(!arr[i])
		{
			prim.push_back(i);
			for(long long  int j=i*i;j<100005;j+=i)arr[j]=1;
		}
	}
}
void rows_sum()
{
	for(int i=0;i<m;i++)
	{
		long long int sum=0;
		for(int j=0;j<n;j++)
		{
			if(arr[matrix[i][j]])
			{
				it=upper_bound(prim.begin(),prim.end(),matrix[i][j]);
				sum+=(*it)-matrix[i][j];
			}
		}
		if(min_row>sum)min_row=sum;
	}
	
}
void coulm_sum()
{
	for(int j=0;j<n;j++)
	{
		long long int sum=0;
		for(int i=0;i<m;i++)
		{
			if(arr[matrix[i][j]])
			{
				it=upper_bound(prim.begin(),prim.end(),matrix[i][j]);
				sum+=(*it)-matrix[i][j];
			}
			
		}
		if(min_coulm>sum)min_coulm=sum;
	}
}
int main(int argc, char** argv) {
	arr[1]=1;
	seive();
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}
	}
	rows_sum();
	coulm_sum();
	cout<<min(min_row,min_coulm);
	return 0;
}
