// print the power of two numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two nos : ";
    cin >> a >> b;

    int i;
    int ans = 1;

    for (i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "the answer is : " << ans << endl;
}