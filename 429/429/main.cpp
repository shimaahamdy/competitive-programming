#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>words;
        string word;
        while(cin>>word , word !="*")
            words.push_back(word);
            
        string line;
        cin.ignore();
        while(getline(cin,line) && line!="")
        {
        	string a,b;
        	bool c=true;
        	for(int i=0;i<line.size();++i)
        	{
        		if(line[i]==' '&& c)
				{
				c=false;
				continue;
			    }
        		if(c)a+=line[i];
        		else b+=line[i];
        		
			}
		

		
        map<string,int>reached;
        queue<string>s;
        reached[a]=0;
        s.push(a);
        while(!s.empty()&&reached.count(b)==0)
        {
            string node=s.front();
            s.pop();
            for(int i=0 ;i<words.size();++i)
            {
                string temp=words[i];
                if(reached.count(temp)==0 && temp.size()==node.size())
                {
                    int diff=0;
                    for(int j=0;j<node.size();++j)
                    {
                        if(node[j]!=temp[j])++diff;
                    }
                    if(diff==1)
                    {
                        reached[temp]=reached[node]+1;
                        s.push(temp);
                    }
                }
            }

        }
        cout<<a<<" "<<b<<" "<<reached[b]<<endl;
   }
   if(t)cout<<endl;
    }

    
    return 0;
}
