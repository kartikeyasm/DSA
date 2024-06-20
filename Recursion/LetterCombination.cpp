#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Q17. Letter Combinations of a Phone Number
/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png (Image Address for refrence)

https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/  (Question Link)

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]

*/

void solve(string digits, string output, int index, vector<string> &ans, string mapping[]){
    
    //Base Case
    if(index>=digits.size()){
        ans.push_back(output);
        return;
    }

    int num=digits[index]-'0';
    string value=mapping[num];

    for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(digits, output, index+1, ans, mapping);
        output.pop_back();   //BackTracking   (Reffer to page 75,76 for explanation)
    }

    
}

vector<string> letterCombination(string digits){
    vector<string> ans;
    string output;
    int index=0;
    if(digits.size()==0){
        return ans;
    }
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main(){
    string s="32";
    vector<string> ans=letterCombination(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<", ";
    }
    cout<<endl; 
    return 0;
}