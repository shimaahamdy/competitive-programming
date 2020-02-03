//============================================================================
// Name        : .cpp
// Author      : shimaahamdy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long long int n=0,k=0,oddx=0;
	n=5,k=2;
	if(n%2==0)oddx=n/2;
	else oddx=n/2+1;
	if(k<=oddx)cout<<2*k-1;
	else cout<<(k-oddx)*2;
	return 0;
}
