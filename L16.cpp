/* Perform SELECTION SORT.
arr[5] = {0,6,3,8,2};
ans = {0,2,3,6,8}   */

#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{

    int arr[5] = {0, 6, 3, 8, 2};
    cout << selectionsort(arr, 5) << endl;
}