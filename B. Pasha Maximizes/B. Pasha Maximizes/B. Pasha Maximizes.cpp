// B. Pasha Maximizes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string s;
    int k;
    bool swaping = 0;
    cin >> s>>k;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '9')continue;
        int loop = 0, j=i+1,maxi=i;
        while (loop < k && j < s.size())
        {
            if (s[maxi] < s[j])
                maxi = j;
            
            ++loop;
            ++j;
        }
        for (int l = maxi; l > i; --l)
        {
            swap(s[l], s[l - 1]);

        }
        k -= (maxi-i);
   }
    cout << s;
}

