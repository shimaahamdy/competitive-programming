#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,arr[10005]={0},l=0;double min=-5.0,d=0;
	  cin>>n>>l;
	  for(int i=0;i<n;i++)
	  {
	  	cin>>arr[i];
	  }
	  sort(arr,arr+n);
	  if(arr[0]!=0)min=arr[0]-0;
	  if(arr[n-1]!=l)
	  {

	  	d=l-arr[n-1];
	  	
	  	if(min<d)
	  	{
	  	     min=d;	
	  	     
		}
	  }
	  for(int i=0;i<n-1;i++)
	  {
	  	d=((arr[i+1]-arr[i])/2.0);
	  	if(min<d && d!=0)min=d;
	
	  }
	  cout<<fixed<<setprecision(10)<<min;

		return 0;
}
