#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Stack is empty: "<<s.empty()<<endl;
}