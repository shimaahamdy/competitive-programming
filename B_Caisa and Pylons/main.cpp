#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=0,h=0,prev=0,eng=0,doll=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>h;
		if((prev-h)>=0)
		{
			eng+=(prev-h);
		}
		else
		{
			if(eng>=abs((prev-h)))
			{
				eng-=abs(prev-h);
			}
			else
			{
				doll+=abs(prev-h)-eng;
				eng=0;
			}
		}
		prev=h;
	}
	cout<<doll;
	return 0;
}
