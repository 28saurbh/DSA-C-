#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    int temp;
    for (int i = 0; i < size; i++)
    {
        if (start >= end)
        {
            break;
        }
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
}