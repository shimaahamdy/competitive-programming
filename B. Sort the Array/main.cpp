#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rev(int arr[],int r,int l)
{
    int siz=l-r+1;
    vector<int>temp(siz);
    for(int i=0;i<siz;++i)
    {
        temp[i]=arr[l];
        --l;
    }
    for(int j=0;j<siz;++j)
    {
        arr[r]=temp[j];
        ++r;
    }


}
bool is_sort(int arr[],int siz)
{
    for(int i=0;i<siz-1;++i)
    {
        if(arr[i+1]>arr[i])continue;
        else return false;
    }
    return true;
}
int main()
{
   int arr[100005];
   int n,l=0,r=0;
   cin>>n;
   for(int i=0;i<n;++i)cin>>arr[i];
   while(l<n-1)
   {
       if(arr[l+1]<arr[r])
       {
           ++l;
       }
       else if(l-r==0){
        l++;
        r++;
       }
       else break;
   }
   rev(arr,r,l);
   if(is_sort(arr,n))cout<<"yes"<<"\n"<<r+1<<" "<<l+1;
   else cout<<"no";
    return 0;
}
