// find the SUM of all the elements of an array.

#include <iostream>
using namespace std;

int sumofarr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[50];
    int size;

    cout << "enter the size of an array : ";
    cin >> size;

    cout << "enter the values of the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "the sum is : " << sumofarr(arr, size) << endl;
}