// find the AP of the given nth term : (3 * n + 7)
// eg : n = 3 => (3 * 3 + 7) => (9 + 7) => 16
// input : n --------- output : AP

#include <iostream>
using namespace std;

int ap(int num)
{
    int exp = (3 * num + 7);
    return exp;
}

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int ans = ap(n);
    cout << "the AP is : "<<ans<<endl;
}