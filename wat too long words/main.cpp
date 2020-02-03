#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;int size=0;
	cin>>s;
    size=s.size();
    if(size<=10)cout<<s;
    else 
    cout<<s[0]<<size-2<<s[size-1];
	return 0;
}
