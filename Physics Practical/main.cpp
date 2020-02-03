#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int min=1e6,n=0,s=0,x=0;
	vector<int>arr;
	vector<int>::iterator it2;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	{
		it2=upper_bound(arr.begin(),arr.end(),arr[i]*2);
		s=((arr.end())-it2)+(i);
		if(min>s)min=s;
	}
	cout<<min;
	return 0;
}
