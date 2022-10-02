/*   Find the FIRST and LAST position of an element in a sorted
array.

array = {0,0,1,1,2,2,2,2}
key = 2
output = 4 7

4th index of the array has the first 2 and 7th index has the
last.   */

#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int even[8] = {0,0,1,1,2,2,2,2};

    int ans1 = firstocc(even, 8, 2);
    int ans2 = lastocc(even, 8, 2);

    cout << ans1 << "   " << ans2 << endl;
}
