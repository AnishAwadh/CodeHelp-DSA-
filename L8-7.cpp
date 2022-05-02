// determine weather prime or not using functions

#include <iostream>
using namespace std;

bool PrimeorNot(int num)
{
    int count = 0;

    for (int i = 2; i < num;)
    {
        if (num % i == 0)
        {
            count++;
            i++;
        }
        else
        {
            i++;
        }
    }
    if (count > 0)
    {
        cout << "this is not a prime number " << endl;
    }
    else
    {
        cout << "this is a prime number " << endl;
    }
}

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    PrimeorNot(n);
}