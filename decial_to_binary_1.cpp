#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans[10];
    int i=1;

    while(n!=0){
        ans[i] = n%2;
        i++;

        n = n/2;

    }
    for(int j = i-1;j>0;j--){
        cout<<ans[j];
        }
}

// ans = pow(10, i)*ans + digit;