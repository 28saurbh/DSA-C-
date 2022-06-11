#include<iostream>
#include<string.h>
using namespace std;

void sayDigit(int n, string arr[]){

    if(n == 0)
        return ;
    int digit;
    digit = n % 10;
    // cout<<digit<<" = "<<n<<" % 10"<<endl;
    n = n / 10;
    // cout<<n<<" = "<<n<<" / 10"<<endl<<endl;
    sayDigit(n, arr);

    cout<<digit<<" = "<<n<<" % 10"<<endl;
    cout<<n<<" = "<<n<<" / 10"<<endl;
    cout<<arr[digit]<<" "<<endl; 
    return;
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    sayDigit(n, arr);
}