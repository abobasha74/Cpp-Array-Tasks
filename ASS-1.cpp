#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int *arr = new int[size]; 

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << smallest << endl;

    return 0;
}
