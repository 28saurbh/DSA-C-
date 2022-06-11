#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = n+64;
    int count = row;

    while (row>=65)
    {
        int col = 0;
        while (count-col<row)
        {
            char var = row + col;
            cout << var;
            col = col + 1;
        }
        cout << endl;
        row = row -1;
        
    }
    
    
}