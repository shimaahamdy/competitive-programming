#include <iostream>

using namespace std;
const int siz=100050;
int pos[siz];
int height[siz];
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;++i)cin>>pos[i]>>height[i];
    for(int i=1;i<n-1;++i)
    {
        if(pos[i]-pos[i-1]>height[i])++s;
        else if(pos[i+1]-pos[i]>height[i])
        {
            ++s;
            pos[i]+=height[i];
        }
    }
    if(n==1)cout<<1;
    else cout<<s+2;

    return 0;
}
