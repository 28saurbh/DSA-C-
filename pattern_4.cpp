#include<iostream>
using namespace std;

int main(){
    int i=0, n;

    cin >> n;

    while(i<n){
        int j = 65;
        while(j<n+65){
            char var = j;
            cout << var;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}