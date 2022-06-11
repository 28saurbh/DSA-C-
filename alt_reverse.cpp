#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int altRev(int arr[], int size)
{

    int start = 0;
    int end = 1;
    int temp;
    for (int i = 0; i < size/2 ; i++)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 2;
        end += 2;
    }
    printArr(arr, size);
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    altRev(arr, 6);
}