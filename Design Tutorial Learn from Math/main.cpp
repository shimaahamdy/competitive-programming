#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool arr[1000005];
void seive_comps()
{
	for(int i=2;i*i<1000005;i++)
	{
		if(!arr[i])
		{
			for(int j=i*i;j<1000005;j+=i)arr[j]=true;
		}
	}
}
int main(int argc, char** argv) {
	seive_comps();
	int i=4,n=0,t=0;
	cin>>n;
	while(true)
	{
		if(arr[i])
		{
			t=n-i;
			if(arr[t])
			{
				cout<<i<<" "<<t;
				return 0;
			}
		}
		i++;
	}
	return 0;
}
