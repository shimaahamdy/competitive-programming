#include <iostream>

using namespace std;

int main()
{
    char c;
    int n,lastl=0,firstl=0,firstr=0,lastr=0;
    bool l=0,r=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>c;
        if(c=='L' && !l)
        {
            firstl=i+1;
            lastl=i+1;
            l=true;
        }
        else if(c=='L')lastl=i+1;
        else if(c=='R' && !r)
        {
            firstr=i+1;
            lastr=i+1;
            r=true;
        }
        else if(c=='R') lastr=i+1;
    }
   if(r && !l)cout<<firstr<<" "<<lastr+1;
   else if(l && !r)cout<<lastl<<" "<<firstl-1;
   else cout<<firstr<<" "<<lastr;
    return 0;
}
