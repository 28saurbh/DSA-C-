#include<iostream>
using namespace std;

int fact(int n){

    // Base Case
    if(n==1)
        return 1;
    return n * fact(n-1);
}

int count(int n){
    //Base Case
    if(n==0){
        return 1;
    }
    count(n-1);
    cout << n <<endl;
    return 0;
}

int fabonacci(int x, int y, int target = 144){

    //Base case
    if(x > target){
        return 0;
    }
    if(x == target){
        cout << x << endl << "Number Found: "<< x << endl;
        return 0;
    }

    cout<< x << " " ;
    fabonacci(y, x+y);
    return 0;
}

int main(){
    // int n;
    // cin >> n;
    // cout << "Factorial Of N is " << fact(n) << endl;
    // count(n);
    fabonacci(0, 1);
}