#include<iostream>
using namespace std;

int main(){
    int arr[] = {65, 12, 26, 25, 11};
    
    for(int i = 0; i<4; i++){
        int k = 0;
        for(int j = 1; j<5; j++){
            if(arr[k]>arr[j]){
                swap(arr[k], arr[j]);
                cout<<arr[k]<<" "<<arr[j]<<" ";
            }
            k++;
            // cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}