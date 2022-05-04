// Search if a given element is present or not in an array.
// arr[10] = {5,-2,7,10,22,-2,0,5,22,1}

#include <iostream>
using namespace std;

bool search(int arr[], int size , int key)
{
    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int array[10]= {5,-2,7,10,22,-2,0,5,22,1};
    int key;

    cout << "enter the element to search for : ";
    cin >> key;

    bool found = search(array , 10 , key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else {
        cout << "key is absent" << endl;
    }
    
}
