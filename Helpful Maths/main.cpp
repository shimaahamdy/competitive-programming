#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string a;int num[150]={0},j=0;
	cin>>a;
	int size=a.size();
	for(int i=0;i<size;i+=2,j++)
	{
		num[j]=a[i];
	    
	}
	sort(num,num+j);
	for(int i=0;i<j-1;i++)
	{
		cout<<num[i]-48<<'+';
	}
	cout<<num[j-1]-48;
	return 0;
}
