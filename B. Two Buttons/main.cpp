#include<bits/stdc++.h>
using namespace std;
//queue<int>q;
//int steps[50000];
int main()
{
    /*int n,m;
    cin>>n>>m;
    steps[n]=1;
    q.push(n);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        if(cur==m)break;

        int child1=cur*2;
        int child2=cur-1;

        if(child1<50000)
        {
            if(!steps[child1])
            {
                q.push(child1);
                steps[child1]=steps[cur]+1;
            }
        }
         if(child2<50000 && child2>0)
        {
            if(!steps[child2])
            {
                q.push(child2);
                steps[child2]=steps[cur]+1;
            }
        }
    }
   cout<<steps[m]-1;*/
   int n,m,a=0;
   cin>>n>>m;
   while(n<m)
   {
       if(m%2==0)m/=2;
       else ++m;
       ++a;
   }
   cout<<a+n-m;
    return 0;
}
