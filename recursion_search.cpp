#include<iostream>
using namespace std;

bool search(int arr[], int size, int target){

    if(size == 0)
        return false;
    
    if(arr[0] == target)
        return true;
    
    int remainingPart = search(arr + 1, size - 1, target);
    return remainingPart;
}

int main(){
    int n, target;
    cin>>n;
    cin>>target;
    int* arr = new int[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    if(search(arr, n, target))
        cout<<"No is Present";
    else
        cout<<"Not Present";
}