#include <iostream>
#include<bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s1,s2;int t=0,a1[3][2],a2[3][2];
	vector<bool>v;
	cin>>t;
	for(int k=0;k<t;++k)
	{
		cin>>s1>>s2;
		a1[0][0]=s1[0];a2[0][0]=s2[0];
		a1[0][1]=s1[1];a2[0][1]=s2[1];
		a1[1][0]=s1[2];a2[1][0]=s2[2];
		a1[1][1]=s1[4];a2[1][1]=s2[4];
		a1[2][0]=s1[3];a2[2][0]=s2[3];
		a1[2][1]=s1[5],a2[2][1]=s2[5];
		int c=0;
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				if(a1[i][0]==a2[j][0] && a1[i][1]==a2[j][1])
				{
					a2[j][0]=a2[j][1]=-1;
					++c;
					break;
				}
				else if(a1[i][0]==a2[j][1] && a1[i][1]==a2[j][0])
				{
						a2[j][0]=a2[j][1]=-1;
					++c;
					break;
				}
			}
		}
		if(c==3)v.push_back(1);
		else v.push_back(0);
	}
	for(int i=0;i<t;++i)
	{
		if(v[i])cout<<"Equal\n";
		else cout<<"Not Equal\n";
	}
	return 0;
}
