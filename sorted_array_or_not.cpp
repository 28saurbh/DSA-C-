#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool reminingPart = isSorted(arr + 1, size-1);
        cout<<reminingPart<<endl;
        return reminingPart;
    }
}

int main(){
    int arr[7] = {0, 1, 2, 3, 4, 6, 5};
    int size = 7;

    int ans = isSorted(arr, size);
    if(ans)
        cout<<"Array is sorted";
    else
        cout<<"Array is Not Sorted";
}