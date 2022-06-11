#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = 0;

    while (s < e)
    {
        mid = (s + e) / 2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
    }

    return s;
}

int b_search(int arr[], int s, int e, int key)
{
    int index = s;
    int end_index = e;
    int mid = 0;
    while (index <= end_index)
    {
        mid = (index + end_index) / 2;

        cout << "Mid: " << mid << endl;

        if (key == arr[mid])
        {
            cout << "Key Found: " << key << endl;
            return 1;
        }
        if (arr[mid] > key)
        {
            end_index = mid - 1;
        }
        else
        {
            // cout<<"Index: "<<index<<endl;
            index = mid + 1;
        }
    }
    return 0;
}
int main()
{

    int arr[] = {7, 9, 1, 2, 5};
    int size = 5;
    int key = 1;

    int pivot = getPivot(arr, size);
    cout << pivot << endl;

    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        cout << b_search(arr, pivot, size - 1, key);
    }
}