#include<iostream>
using namespace std;

bool getSearch(int arr[], int size, int key){

    if(size == 1)
        return false;

    int s = 0, e = size;
    int mid = (s + e) / 2;

    // cout<<arr[0]<<" "<<arr[mid]<<" "<<arr[e]<<" size "<<size<<" mid "<<mid<<" e "<<e<<endl;
    
    if(arr[mid] == key)
        return true;

    else if(arr[mid] < key){
        bool rem = getSearch(arr + mid , size - mid, key);
        return rem;
    }
    else{
        bool rem = getSearch(arr - mid , size - mid, key);
        return rem;
    }
    
}


int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int key = 6;
    int size = 5;
    if(getSearch(arr, size, key))
        cout<<"Key Found";
    else
        cout<<"key Not Found";
}