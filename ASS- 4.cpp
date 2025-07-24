#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    vector<int> arr1(size), arr2(size), merged(size * 2);

    cout << "Enter elements of array 1:\n";
    for (int i = 0; i < size; i++)
        cin >> arr1[i];

    cout << "Enter elements of array 2:\n";
    for (int i = 0; i < size; i++)
        cin >> arr2[i];

    int index = 0;
    for (int i = 0; i < size; i++)
    {
        merged[index++] = arr1[i];
        merged[index++] = arr2[i];
    }

    cout << "Array 1: [ ";
    for (int i = 0; i < size; i++)
        cout << arr1[i] << " ";
    cout << "]\n";

    cout << "Array 2: [ ";
    for (int i = 0; i < size; i++)
        cout << arr2[i] << " ";
    cout << "]\n";

    cout << "Merged array: [ ";
    for (int i = 0; i < size * 2; i++)
        cout << merged[i] << " ";
    cout << "]\n";

    return 0;
}
