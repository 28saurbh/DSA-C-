#include<iostream>
using namespace std;

int main(){

    int i,j,x=0,n;
    cin >> n;
    int var = 65;

    for(i=var; i<n+var; i++){
        char a = i;
        for(j=0; j<n; j++){
            cout << a << " ";
        }
        cout << endl;
    }
}