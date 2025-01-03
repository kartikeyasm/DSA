#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void printStack(stack<int> &s){
    if(s.empty()){
        cout<<endl;
        return;
    }
    int temp= s.top();
    cout<<temp<<" , ";
    s.pop();
    printStack(s);
    s.push(temp);
}


void delMiddle(stack<int> &s, int size, int curr){
    if(curr==size/2){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    delMiddle(s, size, curr+1);
    s.push(temp);
}

bool isValid(string s){
    stack<char> stk;
    for(char i:s){
        if(i=='(' || i=='[' || i=='{'){
            stk.push(i);

        }
        else if(i==')' && !stk.empty() && stk.top()=='('){
            stk.pop();
        }
        else if(i==']' && !stk.empty() && stk.top()=='['){
            stk.pop();
        }
        else if(i=='}' && !stk.empty() && stk.top()=='{'){
            stk.pop();
        }
        else{
            return false;
        }
    }
    if(stk.empty()){
        return true;
    }
    else{
        return false;
    }
}

void insertAtBottom(stack<int> &s, int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(temp);
}

void revStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp= s.top();
    s.pop();
    revStack(s);
    insertAtBottom(s, temp);
}

void insertSortedStack(stack<int> &s, int data){
    if(s.empty() || s.top()<data){
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    insertSortedStack(s, data);
    s.push(temp);
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    sortStack(s);
    insertSortedStack(s, temp);
}

int main(){
/*     
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    delMiddle(s,s.size(),0);
    printStack(s);
*/ 
/*
    string s="()";
    cout<<isValid(s);
*/
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    sortStack(s);
    printStack(s);
    return 0;
}