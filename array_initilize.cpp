#include <iostream>
using namespace std;

void print_Arr(int arr[], int size, int val)
{
    int i = 0;
    while (i < size)
    {
        arr[i] = val;
        cout << i << "-\t" << arr[i] << endl;
        i++;
    }
}

int main()
{
    int size, val;

    cout << "Enter Size Of Array - ";
    cin >> size;

    int arr[size];
    cout << "Enter Value - ";
    cin >> val;

    print_Arr(arr, size, val);
    return 0;
}