//============================================================================
// Name        : test.cpp
// Author      : shimaahamdy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<bits\stdc++.h>
using namespace std;

int main() {
	int n=0,arr[105];
	cin>>n;
	for(int i= 0;i<n;++i)cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;++i)cout<<arr[i]<<" ";
	return 0;
}
