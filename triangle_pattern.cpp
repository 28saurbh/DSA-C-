#include<iostream>
using namespace std;

int main(){
    int i=0,n;
    cin >> n;

    while(i<n){

        int j = 0;
        while (j<=i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}