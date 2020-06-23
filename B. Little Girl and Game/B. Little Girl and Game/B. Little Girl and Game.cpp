

#include <iostream>
using namespace std;
int main()
{
    string s;
    int arr[100] = { 0 },odd=0;
    cin >> s;
    int siz = s.size();
    for (int i = 0; i < siz; ++i)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 100; ++i)
    {
        if (arr[i] && arr[i] % 2 == 1)
            odd++;
    }
    if (odd <= 1 || odd % 2 == 1)cout << "First\n";
    else cout << "Second\n";
    

}

