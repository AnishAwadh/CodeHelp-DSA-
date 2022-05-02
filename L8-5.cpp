// make a FUNCTION using which determine a number is
// EVEN or ODD

#include <iostream>
using namespace std;

bool type(int num)
{
    if (num % 2 == 0)
    {
        cout << "this is even number" << endl;
    }
    else
    {
        cout << "this is odd number" << endl;
    }
}

int main()
{
    int a;
    cout << "enter a number : ";
    cin >> a;

    type(a);
}
