#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int n;
    
    cin >> n;

    while (i<n)
    {
        int j = 65;
        while (j<n+65)
        {
            char var = j+i;
            cout << var << " ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        
    }
    

}