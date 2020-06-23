#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int  horz=1,vert=1,sum=0,m,n,x[1050],y[1050];
        scanf("%d%d",&m,&n);
        for(int i=0;i<m-1;++i)
            scanf("%d",&x[i]);

        for(int i=0;i<n-1;++i)
            scanf("%d",&y[i]);

        sort(x,x+m-1,greater<int>());
        sort(y,y+n-1,greater<int>());


        int i=0,j=0;
        while(i<(m-1) && j<(n-1))
        {
            if(x[i]>=y[j])
            {
                sum+=vert*x[i];
                ++horz;
                ++i;

            }

            else
            {
                sum+=horz*y[j];
                ++vert;
                ++j;
            }
        }
        while(i<(m-1))
        {
            sum+=vert*x[i];
            ++horz;
            ++i;
        }
        while(j<(n-1))
        {
            sum+=horz*y[j];
            ++vert;
            ++j;
        }

        cout<<sum<<"\n";

    }
        return 0;
}
