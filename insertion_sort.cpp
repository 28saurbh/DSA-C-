#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = 7;

    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}