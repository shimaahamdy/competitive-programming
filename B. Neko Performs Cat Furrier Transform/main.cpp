#include <bits/stdc++.h>

using namespace std;
int arr[30];
int main()
{
    for(int i=0;i<25;++i)
    {
        arr[i]=(2<<i)-1;
    }
    int n;
    //scanf("%d",&n);
    int x=39;
    int y=31;
    x=x^y;
    cout<<x;
    return 0;
}
