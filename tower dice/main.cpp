#include <iostream>

using namespace std;

int main()
{
    int n,x,x1,y1;
    cin>>n>>x;
    for(int i=0;i<n;++i)
    {
        cin>>x1>>y1;
        if(x1==x || x1==7-x || y1==x || y1==7-x )
        {
            cout<<"NO";
            return 0;
        }

    }

    cout<<"YES";
    return 0;
}
