#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=0,y=0,ans=0;
	cin>>x>>y;
	ans=6-(max(x,y)-1);
	if(ans==1)cout<<ans<<"/"<<6;
	else if(ans==2 || ans==4)cout<<ans/2<<"/"<<6/2;
	else if(ans==3)cout<<1<<"/"<<2;
	else if(ans==5)cout<<5<<"/"<<6;
	else cout<<1<<"/"<<1;
	return 0;
}
