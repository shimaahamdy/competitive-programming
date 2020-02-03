#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string s2,s1;
int target;
double probnum;
double corrcnum;
int siz;
void prob(int sum,char a,int i)
{

    if(i==siz)
    {
        if(sum==target)++corrcnum;
        ++probnum;
        return ;
    }
    if(a=='+')
    {
        sum++;
        prob(sum,s2[i+1],i+1);
    }
    else if(a=='-')
    {
        sum--;
        prob(sum,s2[i+1],i+1);
    }
    else
    {
        prob(sum,'+',i);
        prob(sum,'-',i);

    }




}
int main()
{
    cin>>s1>>s2;
     siz=s1.size();
    for(int i=0;i<siz;++i)
    {
        if(s1[i]=='+')target++;
        else if(s1[i]=='-')target--;
    }
    s2.push_back('.');
    prob(0,s2[0],0);
        cout<<fixed<<setprecision(9)<<corrcnum/probnum;

    return 0;
}
