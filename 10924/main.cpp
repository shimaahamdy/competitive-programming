#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arr[1500];
void seive()
{
	for(int i=2;i<1500;i++)
	{
		if(!arr[i])
		{
		for(int j=i*i;j<1500;j+=i)
		  arr[j]=1;
	    }
		
	}
}
int letter_value(char a)
{
	
		if(a>='A' && a<='Z')return int(a)-38;
		else return int(a)-96;

}
int main(int argc, char** argv) {
       string a;int size=0,r=0,count=0;bool ans[1000005]={0};            
       seive();
       while(cin>>a)
       {
       	count=0;
       	size=a.size();
       	for(int i=0;i<size;i++)count+=letter_value(a[i]);
       	if(!arr[count])ans[r]=1;
       	r++;
       	
	   }
	   for(int i=0;i<r;i++)
	   {
	   	if(ans[i])cout<<"It is a prime word.\n";
	   	else cout<<"It is not a prime word.\n";
	   }
	   
	return 0;
}
