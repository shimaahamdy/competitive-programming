#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=0,n=0;
	queue<int>q;
	while(cin>>x,x)
	{
		
	   for(int i=1;i<=x;++i)q.push(i);
	   cout<<"Discarded cards:";
		while(q.size()>1)
		{
			printf(" %d", q.front());
			q.pop();
			n=q.front();
			q.pop();
			if(!q.empty())printf(",");
			q.push(n);		
		}
		printf("\nRemaining card: %d\n",q.front());
		q.pop();
		
      }
	
	return 0;
}
