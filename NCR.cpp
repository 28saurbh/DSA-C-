#include<iostream>
using namespace std;

int fact(int a){
    int ans=1;
    while (a!=0)
    {
        ans = a*ans;
        a--;
    }
    return ans;
}


int NCR(int n, int r){
    int num = fact(n);
    int deno = fact(r)*fact(n-r);
    return num/deno;

}
 
int main(){
    int n,r;
    cin>>n>>r;

    cout<<NCR(n,r);
    
}