#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("sourabh");
    q.push("Garewal");
    q.push("From");
    q.push("Gadarwara");
    
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    q.pop();
    cout<<"Front after pop: "<<q.front()<<endl;

}