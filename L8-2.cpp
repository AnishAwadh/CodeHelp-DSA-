// amount = 1300
// how many 100s , 50s , 20s , 1s ruppee notes required ?

#include <iostream>
using namespace std;

int main()
{
    int amount = 1330;
    int rem = 0;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "100 note required : " << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "50 note required : " << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "20 note required : " << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "1 note required : " << Rs1 << endl;
    }
}