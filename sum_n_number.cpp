#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout << "enter no. " ;
    cin >> n;

    for(i=0;i<=n;i++){
        sum = i + sum;
    }

    cout << sum;
}