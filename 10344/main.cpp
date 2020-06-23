#include <iostream>

using namespace std;
int num[10];
bool vis[10];
bool sol;

void clea()
{
    for(int i=0;i<5;++i)
        vis[i]=0;

    sol=0;
}
void possibleties(int pos,bool a1 , int value )
{
     if(pos==5)
     {
         if(value==23)sol=1;
          return ;
     }
    for(int i=0;i<5;++i)
    {
        if(vis[i])continue;
        vis[i]=1;
        if(a1)
        {
            possibleties(pos+1,1,value+num[i]);
            possibleties(pos+1,1,value-num[i]);
            possibleties(pos+1,1,value*num[i]);
        }
        else possibleties(pos+1,1,num[i]);

        vis[i]=0;
    }
}
int main()
{
    while(cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4])
    {
        if(num[0]+num[1]+num[2]+num[3]+num[4]==0)break;
        possibleties(0,0,0);
        if(!sol)cout<<"Impossible\n";
        else cout<<"Possible\n";

        clea();

    }
    return 0;
}
