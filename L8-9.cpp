// print fibbonacci num of nth term (given) using function
// input : n ------- output : nth term
// fibbonacci series : 0 , 1 , 1 , 2 , 3 , 5 , 8 , .....

#include <iostream>
using namespace std;

int fibb(int num)
{
    int initial = 0;
    int final = 1;

    for (int i = 2; i < num; i++)
    {
        int next = initial + final;
        initial = final;
        final = next;
    }
    return final;
}

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int ans = fibb(n);

    cout << "the nth term of fibbonaci is : " << ans << endl;
}

// -- ANOTHER WAY TO DO THIS QUESTION IS ON L8-10.cpp -- //