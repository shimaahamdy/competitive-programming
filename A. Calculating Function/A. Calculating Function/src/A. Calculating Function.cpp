//============================================================================
// Name        : .cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
       long long int n = 0;
       cin>>n;
       long long int x =n/2;
       if(n%2==0)cout<<x;
       else cout<<-(x+1);
	return 0;
}
