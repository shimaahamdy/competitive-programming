#include <iostream>
#include <bits\stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string a,b;
	cin>>a>>b;
	int size1=a.size();
	int size2=b.size();
	if(a==b)cout<<-1;
	else cout<<max(size1,size2);
	
	return 0;
}
