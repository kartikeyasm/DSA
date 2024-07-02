#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
#include<stack>
using namespace std;

//Q Min cost to make a string valid

/*
Problem statement
Ninja has been given a string ‘STR’ containing either ‘{’ or ‘}’. 'STR’ is called valid if all the brackets are balanced. Formally for each opening bracket, there must be a closing bracket right to it.

For Example:
“{}{}”, “{{}}”, “{{}{}}” are valid strings while “}{}”, “{}}{{}”, “{{}}}{“ are not valid strings.
Ninja wants to make ‘STR’ valid by performing some operations on it. In one operation, he can convert ‘{’ into ‘}’ or vice versa, and the cost of one such operation is 1.

Your task is to help Ninja determine the minimum cost to make ‘STR’ valid.

For Example:
Minimum operations to make ‘STR’ =  “{{“ valid is 1.
In one operation, we can convert ‘{’ at index ‘1’ (0-based indexing) to ‘}’. The ‘STR’ now becomes "{}" which is a valid string.

Note:
Return -1 if it is impossible to make ‘STR’ valid.
*/


/*
src=> https://www.naukri.com/code360/problems/minimum-cost-to-make-string-valid_1115770?interviewProblemRedirection=true&search=minimum%20cost%20to%20make&count=25&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
*/


int findMinimumCost(string str) {
  // Write your code here
  if(str.size()%2!=0){
    return -1;
  }
  stack<char> s;
  for(char c:str){
    if (c == '{') {
      s.push(c);
    } 
    else if (c == '}'){
      if(!s.empty() && s.top()=='{'){
        s.pop();
      }
      else{
        s.push(c);
      }
    }
  }
  int a=0;
  int b=0;
  while(!s.empty()){
    if (s.top() == '{') {
      a++;
      s.pop();
    } 
    else if (s.top() == '}') {
      b++;
      s.pop();
    }
  }
  return ((a+1)/2 + (b+1)/2);
}

int main(){


    return 0;
}