#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int siz=x.size();
    for(int i=siz-1;i>=0;--i)
    {
        if('9'-x[i]<x[i] && i!=0)x[i]='9'-x[i];
        else if(i==0 && '9'-x[i]<x[i] && '9'-x[i]!='0')x[i]='9'-x[i];
    }
    for(int i=0;i<siz;++i)cout<<int(x[i]);
    return 0;
}
