// print sum of n number of EVEN numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the limit : "<<endl;
    cin>>n;

    int i = 2;
    int sum = 0;

    while (i<=n)
    {
        sum=sum+i;
        i=i+2;

    }
    cout<<"the sum is : "<<sum<<endl;
}