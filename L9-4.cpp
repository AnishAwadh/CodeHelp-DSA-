// Reverse an Array

# include <iostream>
using namespace std;

void printarray(int arr[] , int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;

    while(end >= start)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout << endl;
}

int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printarray(arr,6);
    printarray(brr,5);
}







