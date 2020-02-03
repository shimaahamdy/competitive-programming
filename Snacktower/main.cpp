#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int size=1e5+50;
int main(int argc, char** argv) {
	int arr[size],n;
	priority_queue<int>q;
	cin>>n;
	for(int i=0;i<n;++i)cin>>arr[i];
	for(int i=0,j=n;i<n;++i)
	{
		if(arr[i]==j)
		{
	    	cout<<j<<" ";
		    --j;
		    while(!q.empty())
		    {
		    	if(q.top()==j)
		    	{
		    		cout<<j<<" ";
		    		--j;
		    		q.pop();
				}
				else break;
			}
		    
	    }
	    else if(!q.empty())
	    {
	    	while(!q.empty())
	    	{
	    		if(q.top()==j)
		    	{
		    		cout<<j<<" ";
		    		--j;
		    		q.pop();
				}
				else
				{
					q.push(arr[i]);
					break;
				}
			}
		}
		else q.push(arr[i]);
		cout<<"\n";
	}
	return 0;
}
