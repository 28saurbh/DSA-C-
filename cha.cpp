#include<iostream>
#include<vector>
using namespace std;

def solution(arr, p, q, r):
    arr.sort()
    print(arr)
    num=p+(q*2)+(r*3)
    total=0
    for i in range(num):
        total+=arr[i]
    return total

int main(){

}