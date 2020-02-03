#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int prim[100]={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0
,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1},
vis[20]={0},arr[20],n=0,s=1,t=1,cn[20];
  
void p(int r=2)
{
	if(r==cn[s]+1)
	{
			if(!prim[1+arr[cn[s]]])
			return;
			for(int i=1;i<=cn[s];i++)
			{
			    if(i!=1)cout<<" ";
			    cout<<arr[i];
			}
			puts("");
			return ;
		
	   
	}
	
	for(int i=2;i<=cn[s];i++)
	{
		if(vis[i] || !prim[i+arr[r-1]])continue;
		vis[i]=1;
		arr[r]=i;
		p(r+1);
		vis[i]=0;
	}
}
int main(int argc, char** argv) {
	int x=2,b=1;
	arr[1]=1;
	while(cin>>n)
	{
    cn[t]=n;
    t++;
    }
    
    for(int i=1;i<t;i++)
    {
    	cout<<"Case "<<i<<":\n";
    	p();
    	if(i!=t-1)cout<<"\n";
    	s++;
    
	}
	
    
	return 0;
}
