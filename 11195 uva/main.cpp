#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool arr[300][300]={0};int col[20]={0},digr[50]={0},digl[50]={0},count=0, n=1,m;
void nqueens(int r=1)
{
	if(r>n)
	{
		count++;
		return ;
	}
	for(int c=1;c<=n;c++)
	{
		if(arr[r][c] || col[c] || digr[c+r] || digl[c-r+m])continue;
		   col[c]=digr[c+r]=digl[c-r+m]=1;
		   nqueens(r+1);
		   col[c]=digr[c+r]=digl[c-r+m]=0;
	}
}
int main(int argc, char** argv) {
	char s;int t=1,ans[30]={0};

	while(n)
	{
		cin>>n;
		if(n==0)
		{
				for(int i=1;i<t;i++)cout<<"Case "<<i<<": "<<ans[i]<<"\n";
				return 0;
		}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>s;
			if(s=='*')arr[i][j]=1;
			else arr[i][j]=0;
		}
	}
	m=n+1;
	nqueens();
	ans[t]=count;
	t++;
	count=0;
	
	}
	
	return 0;
}
