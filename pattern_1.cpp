#include<iostream>
using namespace std;

int main(){

    int i,j,x=0,n;
    cin >> n;

    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            cout << i+j << "\t";
        }
        cout << endl;
    }
}