#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ans,n,m;
char current[55];
struct attemp
{
    int correct;
    char s[55];
};
vector<attemp>v(55);
void vaildationsNum(int pos,int exc)
{

    if(pos==n)
    {
        if(exc!=v[0].correct)return;
        for(int i=1;i<m;++i)
        {
            int right=0;
            for(int j=0;j<n;++j)
            {
                if(current[j]==v[i].s[j])++right;
            }
            if(right!=v[i].correct)return ;
        }
        ++ans;
        return;
    }


    if(exc<v[0].correct)
    {
        current[pos]=v[0].s[pos];
        vaildationsNum(pos+1,exc+1);
    }
    current[pos]= ((v[0].s[pos])=='1'?'0':'1');
    vaildationsNum(pos+1,exc);
}
int main()
{


   	cin>>n>>m;
   	for(int i=0;i<m;++i)cin>>v[i].s>>v[i].correct;
	ans = 0;
    vaildationsNum(0,0);
    cout<<ans;

    return 0;
}
