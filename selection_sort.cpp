#include<iostream>
using namespace std;

int main(){
    int arr[] = {64, 12, 25, 22, 11};

    for(int i = 0; i<4; i++){
        int minIndex = i;
        for(int j = i+1; j<5; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}