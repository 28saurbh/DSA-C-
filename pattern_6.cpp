#include<iostream>
using namespace std;

int main(){
    int i = 65,n;

    cin >> n;

    while (i<n+65)
    {
        int j = 0;
        while (j<=i-65)
        {
            char var = i+j;
            cout << var;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        
    }
    
}