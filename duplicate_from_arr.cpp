#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{

    int temp,n;
    for (int i = 0; i < size; i++)
    {
        for(int j=i+1; j<size;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<"  ";
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {2, 3, 4, 1, 7, 3, 2};
    findDuplicate(arr,7);
}