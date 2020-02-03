#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool arr[2050];
int p[2050];
int rang[4000];
void seive()
{
	for(int i=2,k=0;i<2050;i++)
	{
		if(!arr[i])
		{
			p[k]=i;
			k++;
			for(int j=i*i;j<2050;j+=i)arr[j]=true;
		}
	}
	
}
void sum()
{
	for(int i=0;i<300;i++)
	{
		if(!arr[p[i]+p[i+1]+1])
		{
			rang[p[i]+p[i+1]+1]=1;
		}
	}
	for(int i=2;i<1005;i++)rang[i]+=rang[i-1];
	
}

int main(int argc, char** argv) {
  seive();
   sum();
   int n=0,stand=0;
   cin>>n>>stand;
   if(rang[n]>=stand)cout<<"YES";
   else cout<<"NO";
  
  
return 0;
}
