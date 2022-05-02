// find out the MAXIMUM element of an array &
// MINIMUM element of an array USING A FUNCTION

#include <iostream>
using namespace std;

int maxarray(int array[])
{
    if (array[0] > array[1] && array[0] > array[2] && array[0] > array[3])
    {
        return array[0];
    }
    else if (array[1] > array[0] && array[1] > array[2] && array[1] > array[3])
    {
        return array[1];
    }
    else if (array[2] > array[0] && array[2] > array[1] && array[2] > array[3])
    {
        return array[2];
    }
    else if (array[3] > array[0] && array[3] > array[2] && array[3] > array[1])
    {
        return array[3];
    }
}

int minarray(int array[])
{
    if (array[0] < array[1] && array[0] < array[2] && array[0] < array[3])
    {
        return array[0];
    }
    else if (array[1] < array[0] && array[1] < array[2] && array[1] < array[3])
    {
        return array[1];
    }
    else if (array[2] < array[0] && array[2] < array[1] && array[2] < array[3])
    {
        return array[2];
    }
    else if (array[3] < array[0] && array[3] < array[2] && array[3] < array[1])
    {
        return array[3];
    }
}

int main()
{
    int firstarr[5] = {3, 12, 8, 19};
    int ans1 = maxarray(firstarr);
    int ans2 = minarray(firstarr);

    cout << "Maximum : " << ans1 << endl;
    cout << "Minimum : " << ans2 << endl;
}