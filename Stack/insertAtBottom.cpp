#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Recursive O(n), O(n)

void insertAtBottom(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(temp);
}


int main(){
    stack<int> s;
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(5);
    insertAtBottom(s,1);
    while(!s.empty()){
        cout<<s.top()<<" , ";
        s.pop();
    }

    return 0;
}