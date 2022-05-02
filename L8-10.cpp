// print fibbonacci num of nth term (given) using function
// input : n ------- output : nth term
// fibbonacci series : 0 , 1 , 1 , 2 , 3 , 5 , 8 , .....
// FORMULA OF Fibb(n) = fibb(n - 1) + fibb(n - 2)

#include <iostream>
using namespace std;

int fibb(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fibb(num - 1) + fibb(num - 2);
}

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int ans = fibb(n);

    cout << "the nth of fibbonacci is : " << ans << endl;
}