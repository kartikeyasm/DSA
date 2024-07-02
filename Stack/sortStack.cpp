#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void insertSortedPos(stack<int> &s, int x){
    if(s.empty() || s.top()<=x){
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    insertSortedPos(s,x);
    s.push(temp);
}


void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s);
    insertSortedPos(s,temp);
}



int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(6);
    s.push(5);
    s.push(1);
    s.push(2);
    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }

    return 0;
}