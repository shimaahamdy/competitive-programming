#include <iostream>
#include <bits/stdc++.h>
bool coverd[2050][2050];
int xr[1005];
int yr[1005];
int rr[1005];
using namespace std;

int main()
{
    int xa,ya,xb,yb,n,tx,ty;
    double dis;
    scanf("%d%d%d%d%d",&xa,&ya,&xb,&yb,&n);
    xa+=1005;
    ya+=1005;
    xb+=1005;
    yb+=1005;
    for(int i=0;i<n;++i)
       scanf("%d%d%d",&xr[i],&yr[i],&rr[i]);
     int sum=(abs(xa-xb)+1)*2+(abs(ya-yb)-1)*2;
     // cout<<sum<<"\n";
    if(xa>xb)
        {
            int t=xa;
            xa=xb;
            xb=t;
        }
    if(ya>yb)
        {
            int t=ya;
            ya=yb;
            yb=t;
        }
     for(int i=0;i<n;++i)
     {
         xr[i]+=1005;
         yr[i]+=1005;
         //cout<<xr[i]<<" "<<yr[i]<<" "<<rr[i]<<"\n";
         for(int j=xa;j<=xb;++j)
         {

            if(!coverd[j][yb])
            {
                 tx=xr[i]-j;
                 ty=yr[i]-yb;
                dis=sqrt(tx*tx+ty*ty);
                if(dis<=rr[i])
                {
                    coverd[j][yb]=1;
                    --sum;
                }
            }
            //cout<<j<<" "<<yb<<" "<<dis<<" "<<rr[i]<<"\n";
            if(!coverd[j][ya])
            {
                tx=xr[i]-j;
                ty=yr[i]-ya;
                dis=sqrt(tx*tx+ty*ty);
                if(dis<=rr[i])
                {
                    coverd[j][ya]=1;
                    --sum;
                }
            }
            //cout<<j<<" "<<ya<<" "<<dis<<" "<<rr[i]<<"\n";
         }
         for(int j=ya;j<=yb;++j)
         {
              if(!coverd[xa][j])
            {
                 tx=xr[i]-xa;
                 ty=yr[i]-j;
                dis=sqrt(tx*tx+ty*ty);
                if(dis<=rr[i])
                {
                    coverd[xa][j]=1;
                    --sum;
                }
            }
          // cout<<xa<<" "<<j<<" "<<dis<<" "<<rr[i]<<"\n";
            if(!coverd[xb][j])
            {
                tx=xr[i]-xb;
                ty=yr[i]-j;
                dis=sqrt(tx*tx+ty*ty);
                if(dis<=rr[i])
                {
                    coverd[xb][j]=1;
                    --sum;
                }
            }
           // cout<<xb<<" "<<j<<" "<<dis<<" "<<rr[i]<<"\n";
         }
         //cout<<"\n\n";
     }
    cout<<sum;
    return 0;
}
