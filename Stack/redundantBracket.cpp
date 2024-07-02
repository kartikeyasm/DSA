#include<iostream>
#include<vector>
#include<stack>

using namespace std;

//Q Redundant Brackets

/*
Problem statement
Given valid mathematical expressions in the form of a string. You are supposed to return true if the given expression contains a pair of redundant brackets, else return false. The given string only contains ‘(‘, ’)’, ‘+’, ‘-’, ‘*’, ‘/’ and lowercase English letters.

Note :
A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

For Example :
((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless. 
While (a + (b*c)) does not have any pair of redundant brackets. 
*/

/*
src=> https://www.naukri.com/code360/problems/redundant-brackets_975473?count=25&page=1&search=minimum%20cost%20to%20make%20&sort_entity=order&sort_order=ASC&attempt_status=NOT_ATTEMPTED&leftPanelTabValue=PROBLEM&customSource=studio_nav
*/


bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> stk;
    int count=0;
    for(char c:s){
        if(c=='(' || c=='+' || c=='-' || c=='*' || c=='/'){
            stk.push(c);
        }
        else if(c==')'){
            bool isRedundant=true;
            while(stk.top()!='('){
                if(stk.top()=='+' || stk.top()=='-' || stk.top()=='*' || stk.top()=='/'){
                    isRedundant=false;
                }
                stk.pop();
            }
            if(isRedundant){
                return true;
            }
            stk.pop();
        }

    }
    return false;
}




int main(){


    return 0;
}