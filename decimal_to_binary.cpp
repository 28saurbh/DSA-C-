#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int bit,i=0,ans=0;

    while (n!=0)
    {
        bit = n&1;
        
        cout<<bit<<endl;

        
        ans = ans * 10 + bit;

            //  OR

        // ans = (pow(10, i)*bit) + ans;
        // i++;

        n = n>>1;
    }
    
    cout<<ans;
}