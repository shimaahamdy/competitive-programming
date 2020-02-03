#include <bits/stdc++.h>

using namespace std;
int arr[100005];
int n,c;
bool vaild(int mid)
{
    int prev=arr[0];
    int num=1;
    for(int i=1;i<n;++i)
    {
        if(arr[i]-prev>=mid)
        {
            ++num;
            prev=arr[i];
        }

    }
    if(num>=c)return true;
    else return false;
}
int MIN()
{
    int l=0,h=1000000005,mid;

    while(l<h)
    {
        mid=l+(h-l+1)/2;

        if(vaild(mid))
            l=mid;
        else
            h=mid-1;
    }
    return l;
}
int main()
{

     int t=0;
     scanf("%d",&t);
     while(t--)
     {

    scanf("%d%d",&n,&c);
    for(int i=0;i<n;++i)
    scanf("%d",&arr[i]);
     sort(arr,arr+n);
     cout<<MIN()<<"\n";
     }
    return 0;
}
