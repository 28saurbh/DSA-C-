#include<iostream>
using namespace std;

// int main(){
//     int i,n;
//     cout << "print no. - ";
//     cin >> n;
//     for(i=2;i<=n;i++){
//         if(i%2==0){
//             cout << "Even No - "<< i << endl;
//         }
//     }
// }


int main(){
    int i,n;
    cout << "Enter No - ";
    cin >> n;
    i=2;
    while (i<=n)
    {
        cout << "Even NO. - " << i << endl;
        i += 2;
    }
    
}