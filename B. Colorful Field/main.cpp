#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int blocked[1050];
int main()
{
    int n,m,k,t,a,b;
    cin>>n>>m>>k>>t;
    for(int i=0;i<k;++i)
    {
        cin>>a>>b;
        blocked[i]=(a-1)*m+b;
    }
    sort(blocked,blocked+k);
    for(int i=0;i<t;++i)
    {
        cin>>a>>b;
        int val=(a-1)*m+b,j=0;
        for(j=0;j<k;++j)
        {
            if(val==blocked[j])
            {
                cout<<"Waste\n";
                break;
            }
            else if(val<blocked[j])
            {
               if((val-j)%3==0)cout<<"Grapes\n";
               else if((val-j)%3==1)cout<<"Carrots\n";
               else if((val-j)%3==2)cout<<"Kiwis\n";
               break;
		    }
		    
        }
        if(j==k)
        {
        	if((val-j)%3==0)cout<<"Grapes\n";
               else if((val-j)%3==1)cout<<"Carrots\n";
               else if((val-j)%3==2)cout<<"Kiwis\n";
		}
        
    }
    
    return 0;
}
