#include<iostream>
using namespace std;

int fab(int x, int y, int n, int& cnt){
    if(cnt == n)
        return x;
    
    cnt++;
    // cout<<x<<' '<<y<<" "<<endl;
    return fab(x+y ,x, n, cnt);

}

int main(){
    int n = 7;
    int cnt = 0;
    cout<<fab(0, 1, n, cnt);
}