#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int siz=s.size();
    for(int i=0;i<siz;++i)
    {
        int arr[100]={0},c=0,miss=0;
        for(int j=i,r=0;r<26 && j<siz;++r,++j)
        {
            if(s[j]=='?')miss++;
            else if(arr[s[j]-'A']==0)
            {
                arr[s[j]-'A']++;
                ++c;
            }
            else break;
        }

       if(c==26)
       {
           for(int j=0;j<siz;++j)
            if(s[j]=='?')cout<<'A';
           else cout<<s[j];
           return 0;
       }
       if((c+miss)==26)
       {
           for(int j=i,r=0;r<26 && j<siz;++j)
           {
               if(s[j]=='?')
               {
               	for(int k=0;k<26;++k)
               	{
               		if(!arr[k])
               		{
               			s[j]=char(k+'A');
               			arr[k]=1;
               			break;
					}
				   }
			   }
           }
          for(int j=0;j<siz;++j)
            if(s[j]=='?')cout<<'A';
           else cout<<s[j];
           return 0;
       }
       

    }
    cout<<-1;
    
    return 0;
}
