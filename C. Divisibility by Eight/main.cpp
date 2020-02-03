#include <iostream>

using namespace std;
string number;
int sum;
int main()
{
    cin>>number;
    int siz=number.size();
   for(int i=0;i<siz;++i)
    {
        int num1=0;
        sum+=(number[i]-'0')*100;
        num1=number[i]-'0';
          if(num1%8==0)
              {
                  cout<<"YES\n"<<num1;
                  return 0;
              }
              //cout<<num1<<endl;
        for(int j=i+1;j<siz;++j)
        {
            sum+=(number[j]-'0')*10;
            num1=0;
               num1=(number[i]-'0')*10;
              num1+=number[j]-'0';
              if(num1%8==0)
              {
                  cout<<"YES\n"<<num1;
                  return 0;
              }//cout<<num1<<endl;


            for(int k=j+1;k<siz;++k)
            {
               sum+=number[k]-'0';
              if(sum%8==0)
              {
                  cout<<"YES\n"<<sum;
                  return 0;
              }//cout<<sum<<endl;

               num1=0;
              num1=(number[j]-'0')*10;
              num1+=(number[k]-'0');
              if(num1%8==0)
              {
                  cout<<"YES\n"<<num1;
                  return 0;
              }
              //cout<<num1<<endl;
             num1=0;
              num1=(number[i]-'0')*10;
              num1+=(number[k]-'0');
              if(num1%8==0)
              {
                  cout<<"YES\n"<<num1;
                  return 0;
              }//cout<<num1<<endl;

               sum-=number[k]-'0';
            }
            sum-=(number[j]-'0')*10;
        }
        sum-=(number[i]-'0')*100;
    }



    cout<<"NO";
    return 0;
}
