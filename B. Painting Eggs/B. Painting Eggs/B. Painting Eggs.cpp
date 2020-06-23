// B. Painting Eggs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char arr[1000006];
int main()
{
    int n, a, b , asum = 0, bsum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        if (abs(asum + a - bsum) > 500)
        {
            arr[i] = 'G';
            bsum += b;
        }
        else
        {
            arr[i] = 'A';
            asum += a;
        }
    }
    if (abs(asum - bsum) <= 500)
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i];
    }
    else cout << -1;
}

