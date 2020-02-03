#include <bits/stdc++.h>

using namespace std;
double mil[1009];
int oo=1000000000;
int yaxis;
int main()
{
    int n,x,y,k=0,cnt=0;
    scanf("%d%d%d",&n,&x,&y);
    for(int i=0;i<n;++i)
    {
        int x1,y1;
        scanf("%d%d",&x1,&y1);
        x1=x1-x;
        y1=y1-y;

        if(y1==0)yaxis++;
        else
        {mil[k]=double(x1)/y1;
        k++;
        }

    }

    for(int i=0;i<k;++i)
    {
        if(mil[i]==oo)continue;
        cnt++;
        for(int j=i+1;j<k;++j)
        {
            if(mil[i]==mil[j])mil[j]=oo;
        }
    }
    if(yaxis)++cnt;
    cout<<cnt;

    return 0;
}
