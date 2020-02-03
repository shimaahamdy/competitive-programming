#include <iostream>

using namespace std;
void rev(string  n)
{
    int siz=n.size();
    string r;
    for(int j=siz-1;j>=0;--j)
    {
        cout<<n[j];
    }


}
int main()
{
    string n;
    cin>>n;
    cout<<n;
    rev(n);
    return 0;
}
