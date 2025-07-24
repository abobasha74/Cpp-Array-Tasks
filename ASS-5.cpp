#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for (int i = 0; i < size; ++i)
    {
        freq[arr[i]]++;
    }

    cout << "\nFrequency of each element:\n";
    for (auto pair : freq)
    {
        cout << "Element " << pair.first << " appears " << pair.second << " time(s).\n";
    }

    return 0;
}