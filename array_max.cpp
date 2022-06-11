#include <iostream>
using namespace std;

int getMax(int arr[])
{
    int max = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[])
{
    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[5] = {12, 9, 6, 1, 7};
    cout<<"Minimum Value -: "<<getMin(arr)<<endl;
    cout<<"Maximum Value -: "<<getMax(arr)<<endl;
}