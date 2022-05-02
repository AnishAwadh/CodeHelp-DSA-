#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    char b ='X';
    bool c = true;
    float d = 1.4;
    double e = 11.7;
    int size = sizeof(e);

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<"the size of e is : "<<size<<endl;

}