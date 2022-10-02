// Reverse alternate element of an array
// eg : {1 , 2 , 3 , 4 , 5 , 6}
// = {2 , 1 , 4 , 3 , 6 , 5}

# include <iostream>
using namespace std;

void printarr(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalt(int arr[] , int size)
{
    for (int i = 0 ; i < size ; i=i+2)
    {
        if(i+1 < size)
        {
            swap(arr[i] , arr[i+1]);
        }
    }
}


int main()
{
    int array[6]={1,2,3,4,5,6};
    int array2[5]={22,34,54,24,98};

    swapalt(array,6);
    printarr(array,6);

    cout << endl;

    swapalt(array2,5);
    printarr(array2,5);

}