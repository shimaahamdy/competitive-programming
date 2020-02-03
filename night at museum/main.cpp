#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=0,y=0,sum=0,size=0;
	string s;
	cin>>s;
	size=s.size();
	x=abs(int('a')-int(s[0]));
	y=(int('a')-96)+(26-(int(s[0])-96));
	sum+=min(x,y);
	for(int i=0;i<size-1;i++)
	{
		x=abs(int(s[i])-int(s[i+1]));
		if(s[i]>s[i+1])
		{
			y=(int(s[i+1])-96)+(26-(int(s[i])-96));
		}
		else 
		   y=(int(s[i])-96)+(26-(int(s[i+1])-96));
		   sum+=min(x,y);
	}
	cout<<sum;

	return 0;
}
