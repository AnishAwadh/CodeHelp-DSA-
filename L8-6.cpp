// find nCr of a number using function
// nCr = n(factorial) / r(factorial) * ((n-r)factorial)
// input : n , r  -------- output : nCr
// eg : 8C0 = 8(factorial) / 0(factorial) * ((8-0)factorial)

#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;

    return ans;
}

int main()
{
    int n, r;
    cout << "enter the values of n and r : ";
    cin >> n >> r;

    nCr(n, r);
    cout << "the nCr of the following numbers is : " << nCr(n, r) << endl;
}