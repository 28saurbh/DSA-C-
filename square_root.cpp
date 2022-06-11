#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int s=0, e=n;
    int mid = 0;
    int ans = -1;

    while (s <= e)
    {

        mid = (s+e)/2;
        int square = mid*mid;

        if(square == n){
            cout<<mid;
            break;
        }

        if(square < n){
            ans = square;
            s=mid+1;
        }

        else{
            e = mid-1;
        }
    }

    
}

// int main(){

//     int n;
//     cin>>n;

//     for(int i=0; i<100; i++){

//         if (i*i == n)
//         {
//             cout<<i<<endl;
//         }
        
//     }
// }