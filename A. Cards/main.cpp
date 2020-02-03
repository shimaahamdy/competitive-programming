#include <bits/stdc++.h>

using namespace std;
int arr[7];
int main()
{
    int n;
    char c;
    scanf("%d",&n);
    while(n--)
    {
        cin>>c;
        if(c=='o')arr[1]++;
        else if(c=='n')arr[2]++;
        else if(c=='e')arr[3]++;
        else if(c=='z')arr[4]++;
        else arr[5]++;
    }
    int maxone=0,maxzero=0;
    maxone=min(arr[1],min(arr[2],arr[3]));
    arr[1]-=maxone;
    arr[2]-=maxone;
    arr[3]-=maxone;
    for(int i=0;i<maxone;++i)cout<<1<<" ";
    maxzero=min(arr[1],min(arr[3],min(arr[4],arr[5])));
    for(int i=0;i<maxzero;++i)cout<<0<<" ";
    return 0;
}
