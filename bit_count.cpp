#include <iostream>
using namespace std;
int bit_count(int x)
{
    int count = 0;
    while (x != 0){
        int bit = x&1;
        if(bit)
            count++;
        
        x = x>>1;
    }
    return count;
}
int bit(){
    int a,b;
    cin>>a>>b;
    cout<<bit_count(a)+bit_count(b);
    return 0;
}
int main()
{
    bit();
}