#include <iostream>
using namespace std;

int b_search(int arr[], int n, int key)
{
    int index = 0;
    int end_index = n-1 ;
    int mid = 0;
    for (int i = index; i <= n; i=index)
    {
        mid = (index + end_index) / 2;

        cout<<"Mid: "<<mid<<endl;

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
    int arr[] = {4, 8, 16,21, 22, 34};
    int key = 8;
    int n = 6;
    // cout<<"main"<<endl;
    // int ans = b_search(arr, n, key);
    if (b_search(arr, n, key) == 0)
    {
        cout << "Key Not Found" << endl;
    }
}