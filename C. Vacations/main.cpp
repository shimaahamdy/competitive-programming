#include <iostream>

/*int n;
int result;
int last;
int current;*/

using namespace std;
int mem[150][3];
vaction(int last,int curr)
{


    if(activity[curr]==1)ans=vaction(1,curr+1);

    else if(activity[curr]==2)
        ans=vaction(2,curr+1);
    else if(activity[curr]==0)ans=vaction(0,curr+1);
    else
    {
        ans=vaction(1,cur+1);

        ans=vaction(2,cur+1);
    }


}

int main()
{
  /* greedy algo
    cin>>n;
   while(n--)
   {
       cin>>current;
       if(!current || current==last)
       {
           ++result;
           last=0;
       }
      else if(current!=3)last=current;
      else if(last)last=3-last;
   }
   cout<<result;*/

    return 0;
}
