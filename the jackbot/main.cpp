#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,arr[10009]={0},s=0,m=0,ans[10009]={0},c=0;
	while(true)
	{
		scanf("%d",&n);
		if(n==0)break;
		else 
		{
		s=0;
		m=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			s=max(s+arr[i],arr[i]);
			m=max(s,m);
		}
		ans[c]=m;
		c++;
	}
	}
	for(int i=0;i<c;i++)
	{
		if(ans[i]==0)cout<<"Losing streak.\n";
		else cout<<"The maximum winning streak is "<<ans[i]<<".\n";
	}
	return 0;
}
