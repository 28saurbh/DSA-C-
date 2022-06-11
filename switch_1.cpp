#include<iostream>
using namespace std;

int power(int a,int n){
    int ans = 1;
    int i=1;
    while (i<=n)        
    {
        ans = ans*a;
        i++;
    }
    return ans;
}
int main(){

    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}