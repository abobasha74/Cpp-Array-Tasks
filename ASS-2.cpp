#include <iostream>
using namespace std;

int main()
{
    int number[10];
    int sum = 0;

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> number[i];
        sum += number[i];
    }

    double average = static_cast<double>(sum) / 10;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
