#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=0;
	cin>>x;
	for(int i=x+1;i<9500;++i)
	{
		bool arr[10]={0};
		int num=i,j=4,c=0;
		while(j--)
		{
			if(!arr[num%10])
			{
			  arr[num%10]=1;
			  ++c;
			}
			num/=10;
		
		}
		if(c==4)
		{
			cout<<i;
			return 0;
		}
	}
	return 0;
}
