#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int n[3],p[3],arr[3];
long long int r=0;
bool test_num(long long int a)
{
	int c=0;
	long long int t=r;
	for(int i=0;i<3;i++)
	{
		long long int s=n[i]-a*arr[i];
		if(s>=0)c++;
		else if((t-abs(s)*p[i])>=0)
		{ 
		c++;
		t-=abs(s)*p[i];
		}
	}
	if(c==3)return true;
	else return false;
}
int main(int argc, char** argv) {
	string s;long long int l=0,h=1e13,mid=0;
	cin>>s;
	for(int i=0;i<3;i++)cin>>n[i];
	for(int i=0;i<3;i++)cin>>p[i];
	cin>>r;
	int size=s.size();
	for(int i=0;i<size;i++)
	{
		if(s[i]=='B')arr[0]++;
		else if(s[i]=='S')arr[1]++;
		else if(s[i]=='C')arr[2]++;
	}
    while(l<h)
    {
    	mid=l+(h-l+1)/2;
    	if(test_num(mid))l=mid;
    	else h=mid-1;
	}
	cout<<l;
	return 0;
}
