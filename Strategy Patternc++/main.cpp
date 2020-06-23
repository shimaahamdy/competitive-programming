#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 class batta
{
private:
    int id;
    string name;
    static int counter;
public:
    batta()
    {
       this->id=counter++;
       this->name=string("Batta#"+string(this->id));
    }
};
int batta::counter=0;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
