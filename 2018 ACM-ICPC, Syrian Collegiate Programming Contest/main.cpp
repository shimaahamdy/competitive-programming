#include <bits/stdc++.h>


using namespace std;
string s;
int siz;
vector<int>portals;
bool vis[200005];

void clearData()
{
    for(int i=0;i<200005;++i)vis[i]=0;

    portals.clear();

}
int way(bool node,int i)
{
    if(s[i]=='e' && node)
         return 1;
    else if(s[i]=='e' && !node)
        return -1;

    if(i<0 || i>=siz || vis[i] || s[i]=='#')
        return 0;

    vis[i]=1;

    int ch1=0;
    int ch2=0;
    int ch3=0;
    if(s[i]=='.')
        node=1;

    if(s[i]=='o')
    {
        for(int i=0;i<portals.size();++i)
        {
            if(!vis[portals[i]])
            ch3=way(node,portals[i]);
        }
    }
      ch1=way(node,i-1);
      ch2=way(node,i+1);

      vis[i]=0;
    if(ch1==-1 || ch2==-1 || ch3==-1)return -1;
    int sum=ch1+ch2+ch3;
    if(sum==3)return 2;
    else return sum;






}
int main()
{
    //freopen("hamming.in", "r", stdin);
    int t=0;
    scanf("%d",&t);
    while(t--)
    {cin>>siz;
    int start;
    for(int i=0;i<siz;++i)
    {
        char c;
        cin>>s[i];
        if(s[i]=='o')portals.push_back(i);
        if(s[i]=='s')start=i;

    }
    cout<<way(0,start)<<"\n";
    clearData();
    }
   /* while(t--)
    {
        int a[2]={0},b[2]={0};
        int n;
        char c;
        scanf("%d",&n);
        int r=n;
        while(n--)
        {
            cin>>c;
            if(c=='0')a[0]++;
            else a[1]++;
        }
        while(r--)
        {
            cin>>c;
            if(c=='0')b[0]++;
            else b[1]++;
        }
        cout<<min(a[0],b[1])+min(a[1],b[0])<<"\n";
    }

    /*while(t--)
    {
        int a[12],b[12];
        for(int i=0;i<12;++i)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(b,b+12);
        if(a[0]==b[0] && a[1]==b[1] && a[2]==b[2] && a[3]==b[3])
            cout<<"yes\n";
        else cout<<"no\n";
    }*/


    return 0;
}
