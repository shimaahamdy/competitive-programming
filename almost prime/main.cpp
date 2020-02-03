#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
     int n=0,t=0,c=0,ans=0,d=0,r=0;
     cin>>n;
     while(n>=6)
     {
     	t=n;
     	c=0;
     	r=0;
     	d=0;
     	for(int i=2;i*i<t;i++)
     	{
     		while(t%i==0)
     		{
     	      t=t/2;
     	      d=i;
     	      if(d!=r)
     	      {
     	      	c++;
     	      	r=d;
			   }
     	      
			}
			
			 
		 }
		 if(t>1)c++;
		 --n;
		 if(c==2)ans++;
	 }
	 cout<<ans;
	return 0;
}
