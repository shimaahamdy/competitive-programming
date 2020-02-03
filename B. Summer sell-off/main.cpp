#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,f,orig[100050],doubled[100050];
        priority_queue<pair<long long int,long long int> >pq;

    cin>>n>>f;
    for(int i=1;i<=n;++i)
    {
    	long long int k,l,diff,p,dp;
    	cin>>k>>l;
    	p=min(k,l);
    	dp=min(2*k,l);
    	diff=abs(dp-p);
    	orig[i]=p;
    	doubled[i]=dp;
    	pq.push(make_pair(diff,i));
    }
    
    long long int sum=0;
    while(!pq.empty())
    {
        int val=pq.top().second;
        if(f)
        {
            sum+=doubled[val];
            --f;
        }
        else sum+=orig[val];
        pq.pop();
    }
    cout<<sum;

    return 0;
	}
