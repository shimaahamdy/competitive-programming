#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,a=0,b=0,c=0,arr[100000]={0},x=0;
	cin>>n;
	for(int i=1,j=1,k=2,l=3;i<=n;i++)
	{
		cin>>x;
		if(x==1)
		{
			arr[j]=i;
			j+=3;
			a++;
		}
		else if(x==2)
		{
			arr[k]=i;
			k+=3;
			b++;
		}
		else
		{
			arr[l]=i;
			l+=3;
			c++;
		}
	}
	x=min(a,b);
	x=min(x,c);
     cout<<x<<"\n";
     for(int i=1,j=1;i<=x;i++,j+=3)cout<<arr[j]<<" "<<arr[j+1]<<" "<<arr[j+2]<<"\n";
	return 0;
}
