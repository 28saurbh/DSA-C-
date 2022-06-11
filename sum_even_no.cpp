#include<iostream>
using namespace std;

int main(){

    int i = 0 , n ,sum = 0;
    cin >> n;

    while (n >= i)
    {
        if(i%2==0){
            sum = sum + i;
        }
        i = i + 1;
    }

    cout << sum;
    
}