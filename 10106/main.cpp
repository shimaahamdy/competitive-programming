#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int size=1e6;
int main(int argc, char** argv) {
	string x;string y;
	while(cin>>x)
	{cin>>y;
	
		int sizex=x.size();
		int sizey=y.size();
	  reverse(x.begin(),x.end());
	  reverse(y.begin(),y.end());
	  int a[600]={0};
	for(int i=0;i<sizex;i++)
	{
		for(int j=0;j<sizey;j++)a[i+j]+=(x[i]-'0')*(y[j]-'0');
	}
    for(int i=0;i<599;i++)
    {
    	a[i+1]+=a[i]/10;
    	a[i]=a[i]%10;
	}
	int k=599;
		while (k > 0 && a[k] == 0) k--;
		for (; k>=0; k--) cout<<a[k];
		cout<<endl;
}


	return 0;
}
