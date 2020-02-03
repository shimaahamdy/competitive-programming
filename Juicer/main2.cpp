#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string a,s;int j=0;
	cin>>a;
	int size=a.size();
	for(int i=0;i<size;)
	{
		if(a[i]=='/')
		{
			s[j]=a[i];
			j++;
			while(a[i]=='/')
			{
				i++;
			}
			
		}
		else
		{
			s[j]=a[i];
			j++;
			i++;
		}
	
	    
	}
	for(int i=0;i<j;i++)
	{
		if(i==0 && s[i]!='/')cout<<"/"<<s[i];
		else cout<<s[i];
		
	}

	return 0;
}
