#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//Q20. Valid Parentheses [https://leetcode.com/problems/valid-parentheses/description/]

//Using stack we can check by


// T=> O(N)
// S=> O(N)
bool isValidParenthesis(string s){
    // Write your code here.
    stack<char> stk;
    for(char i:s){
        if(i=='(' || i=='[' || i=='{'){
            stk.push(i);
        }
        else if(i==')' || i==']' || i=='}'){
            if(i==')' && (stk.empty() || stk.top()!='(')){
                return false;
            }
            if(i==']' && (stk.empty() || stk.top()!='[')){
                return false;
            }
            if(i=='}' && (stk.empty() || stk.top()!='{')){
                return false;
            }
            else{
                stk.pop();
            }
        }
    }
    if(stk.empty()){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    cout<<isValidParenthesis("}{}[]()")<<endl;

    return 0;
}