#include<iostream>
using namespace std;

int main(){
    int i,n,m=1;
    cout << "enter no. ";
    cin >> n;

    for(i=n; i>=1; i--){
        m = i*m;
    }
    cout << "Factorial of " << n << " is " <<m;
}