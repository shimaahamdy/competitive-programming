#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,k=0,x=0,sum=0;vector<int>v;
	cin>>n>>k;
	while(n--)
	{
		scanf("%d",&x);
	    v.push_back(x);
	    if(x==0)++sum;
	}
	k=v[k];
    sort(v.begin(),v.end());
    cout<<v.end()-lower_bound((v.begin()+sum),v.end(),k);
	
	return 0;
}
