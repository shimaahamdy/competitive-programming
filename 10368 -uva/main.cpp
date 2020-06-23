#include <iostream>

using namespace std;


int whoWin(int a, int b)
{
	if(a<b)swap(a,b);
	if(a==0 || b==0)return 0;
	if(a/b>1)return 1;
	return whoWin(a-b,b)+1;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
    	if(a==0 && b==0)break;
    	 int winner=whoWin(a,b);
    	 if(winner%2==1)cout<<"Stan wins\n";
    	 else cout<<"Ollie wins\n";
	}
   

    return 0;
}
