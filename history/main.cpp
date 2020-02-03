#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,a=0,b=0,c=0;
	vector<pair<int,int> >v;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a>>b;
		v.push_back({-b,a});
	}
	sort(v.begin(),v.end());
	for(int i=0,j=i+1;j<n;++j)
	{
		if(v[i].second<v[j].second)++c;
		else
		i=j;
	}
	cout<<c;

	return 0;
}

