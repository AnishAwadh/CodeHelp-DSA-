/* Find the PIVOT element in an array.
arr[5] = {3,8,10,17,1}
ans = 4

NOTE : find the index of the least element.        */

#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start; // can also return end; // answer will be same.
}

int main()
{

    int arr[5] = {3, 1, 2, 7, 10};
    int ans = pivot(arr, 5);
    int ans1 = arr[ans];

    cout << "Index of the element is : " << ans << endl;
    cout << "the element is : " << ans1 << endl;
}