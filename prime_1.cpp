#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){

        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;

}

int main(){
    int n;
    cin>>n;

    if(isPrime(n))
        cout<<"NO is Prime";
    
    else
        cout<<"No is Not Prime";
}