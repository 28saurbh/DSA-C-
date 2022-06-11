#include<iostream>
using namespace std;

int gcd(int a, int b){
    
    if(a==0)
        return b;
    if(b==0)
        return a;

    // while( a != b){

    //     if(a>b)
    //         a = a - b;
    //     else
    //         b = b - a;
    // }
    // return a;


    // USING RECURSION
    if(a>b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }

}

int main(){
    int a = 10;
    int b = 50;

    int ans = gcd(a, b);
    cout<<ans;
}