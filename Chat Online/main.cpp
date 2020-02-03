#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int p=0,q=0,l=0,r=0,arr[1005]={0},t=0,n=0,x=0,y=0,c=0;bool nm[1005]={0};
	cin>>p>>q>>l>>r;
	for(int i=0;i<p;++i)
	{
		cin>>x>>y;
		arr[x]++;
		arr[y+1]--;
	}
	for(int i=1;i<1005;++i)arr[i]+=arr[i-1];
	for(int i=0;i<q;++i)
	{
		cin>>x>>y;
		for(int j=l;j<=r;++j)
		{
			 t=x+j;
			 n=y+j;
			 for(int k=t;k<=n;++k)
			 {
			 	 if(arr[k] && !nm[j])
			 	 {
			 	 	++c;
			 	 	nm[j]=1;
			 	 	break;
				  }
			 } 
		}
	}
	cout<<c;
	return 0;
}
