#include <iostream>
using namespace std;

int countofoccurances(int arr[] , int size , int x)
{
    int count = 0;
    for (int i = 0 ; i < size ; i++)
    {
        if(x == arr[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[50];

    int size;

    cout << "enter the size : ";
    cin >> size;

    for (int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    countofoccurances(arr, size , i);

    

}