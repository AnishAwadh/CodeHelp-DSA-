// Perform QUICK SORT

#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position

    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && pivotIndex < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (pivot < arr[j])
        {
            j--;
        }

        if (i < pivotIndex && pivotIndex < j)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}


void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // recursive call
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}


int main()
{

    int arr[8] = {3, 5, 9, 2, 3, 7, 4, 1};
    int size = 8;

    quickSort(arr, 0, size - 1);

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}