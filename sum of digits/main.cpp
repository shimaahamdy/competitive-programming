#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
      string x;long long int sum=0,arr[199999],count=0;
      cin>>x;
      int s=x.size();
	     for(int i=0;i<s;i++)
        {
         	sum+=(x[i]-48);
      	     
	    }
	    count++;
	    if(s==1)cout<<0;
	    else
	    {
	    while(s>1 && sum>9)
	    {  s=0;
	       int j=0;
	           while(sum!=0)
	       {
	    	
	        	arr[j]=sum%10;
	        	sum/=10;
	        	s++;
	    	   j++;
	    	}
	    	sum=0;
	     	for(int i=0;i<s;i++)
	    	{
		     	sum+=arr[i];
	     	}
	     	count++;
	   }
		cout<<count;
	}
	   
     
      
	return 0;
}
