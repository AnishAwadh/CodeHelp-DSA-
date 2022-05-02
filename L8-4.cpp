// print the power of two numbers using a FUNCTION

#include <iostream>
using namespace std;

int power(int num1, int num2)
{

    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "enter two nos : ";
    cin >> a >> b;

    int answer = power(a, b);
    cout << "the answer is : " << answer << endl;

    int c, d;
    cout << "enter another two nos : ";
    cin >> c >> d;

    int answer2 = power(c, d);
    cout << "the answer is : " << answer2 << endl;
}