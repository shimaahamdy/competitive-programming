#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	pair <int,int>arr[3000];int n=0,x=0,y=0,f=0,s=0,r=0;map<pair<int,int>,int>m;pair<int,int>low;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		arr[i]={x,y};
		if(m.count({x,y})>0)
		{
			f=i;s=x,r=y;
		}
		else
		{
		   m[make_pair(x,y)]=i;	
		}
	}
	if(f!=0)
	{
		cout<<f<<" "<<m[{s,r}];
	}
	else 
	{

	sort(arr+1,arr+n+1);
	low=make_pair(arr[n].first,arr[n].second);
	for(int i=n-1;i>0;i--)
	{
		if(low.second>arr[i].second && low.first!=arr[i].first )low=make_pair(arr[i].first,arr[i].second);
		else if(low.first==arr[i].first)
		{
 			cout<<m[{arr[i].first,arr[i].second}]<<" "<<m[{low.first,low.second}];
        			
					 return 0;
		}
		else 
		{
			cout<<m[{low.first,low.second}]<<" "<<m[{arr[i].first,arr[i].second}];
			return 0;
		}
	}
	cout<<-1 <<" "<<-1;
  }
	return 0;
}
