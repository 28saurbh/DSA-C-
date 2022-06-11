#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;

    cout<<endl<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"ptr2: "<<ptr2<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;

    cout<<"My Answers: "<<endl;
    cout<<&i<<endl;
    cout<<i<<endl;
    cout<<&ptr<<endl;
    

}