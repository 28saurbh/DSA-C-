#include<iostream>
using namespace std;

int sum(int arr[], int n){

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    int ram = sum(arr + 1,n - 1);
    int ans = arr[0] + ram;
    return ans;

}

int main(){

    int n;
    cin>>n;
    int *arr = new int[n-1];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<sum(arr, n);
}