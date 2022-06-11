#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout<<"top before pop:- "<<s.top()<<endl;

    s.pop();
    cout<<"top after pop:- "<<s.top()<<endl;

    cout<<"Size :- "<<s.size()<<endl;
}