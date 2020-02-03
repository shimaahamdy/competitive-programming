//============================================================================
// Name        : a_seabattle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <bits\stdc++.h>
int main() {
	/*int w1,h1,w2,h2;
	long long int sum=0;
	cin>>w1>>h1>>w2>>h2;
	sum=(h1+h2)+w1+h1+(w1-w2)+h2+w2+4;
	cout<<sum;*/
	long long int arr[105],s[105];

	int n;
	cin>>n;
	for(int i=0;i<n;++i)cin>>arr[i];
	sort(arr,arr+n);
	int indx1=n/2+1;
	int indx2=n/2-1;
	for(int j=0,i=n-1;i>=0;++i,++j)
	{

		if(j==0)s[n/2]=arr[i];
		else if(j%2==0)
			{s[indx2]=arr[i];
			--indx2;
			}
		else
			{s[indx1]=arr[i];
			++indx1;
			}
	}
	for(int i=0;i<n;++i)cout<<s[i]<<" ";
	return 0;

	}

