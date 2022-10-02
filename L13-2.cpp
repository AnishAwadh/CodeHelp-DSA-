/* Peak index in a mountain array .
return the INDEX which has the highest value in the array.

array = {0,2,1,0}
output = 1

array = {0,10,5,2}
output = 1          */

#include <iostream>
using namespace std;

int peak(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[5]={0,1,10,20,34};
    int ans = peak(arr,5);

    cout << ans << endl;
}