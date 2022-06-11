#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int x,y;
    char ch;

    // cout<<"Enter 2 NO. - ";
    cin>>x;

    // cout<<"Enter Operation - ";
    cin>>ch;

    cin>>y;
    cout<<"= ";
    switch(ch){

        case '+':
            cout<<x+y<<endl;
            break;
        
        case '-':
            cout<<x-y<<endl;
            break;
        
        case '*':
            cout<<x*y<<endl;
            break;
        
        case '/':
            cout<<x/y<<endl;
            break;
        
        case '%':
            cout<<x%y<<endl;
            break;
        
        default:
            cout<<"Please enter vaild operations";
            break;
    }
    getch();
}

