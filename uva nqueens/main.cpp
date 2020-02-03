#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int col[10],digl[20],digr[20],row[10],arr[100][8],j=1;;
void nquenns(int r=1)
{
	if(r>8)
	{
		for(int i=1;i<=8;i++)
		{
			arr[j][i]=row[i];
		}
		j++;
		return ;
	}
	for(int c=1;c<=8;c++)
	{
		if(col[c] || digr[c+r] || digl[c-r+9])continue ;
		col[c]=digr[c+r]=digl[c-r+9]=1;
		row[r]=c;
		nquenns(r+1);
		col[c]=digr[c+r]=digl[c-r+9]=0;
	}
}
int main(int argc, char** argv) {
	
	int sum=0,c[10],m=500,ans[1500],x=0;
	nquenns();
	while(cin>>c[1])
	{
	for(int i=2;i<=8;i++)cin>>c[i];
	m=500;
	for(int i=1;i<=92;i++)
	{
	     sum=0;
	     
		for(int k=1;k<=8;k++)
		{
			if(arr[i][k]!=c[k])sum++;
		}
	     m=min(m,sum);
	}
	 ans[x]=m;
	     x++;
   }
    for(int i=0;i<x;i++)
    {
    	cout<<"Case "<<i+1<<": "<<ans[i]<<"\n";
	}
	return 0;
}
