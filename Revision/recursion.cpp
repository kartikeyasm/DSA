#include<iostream>
#include<vector>

using namespace std;

/*Given a string S compute recursive a new string where identical char in a string that are adjacent to each other are seperated by "*" */

/* 
void solve(string s, int n, string &ans){
    if(n>=s.size()){
        return;
    }
    ans.push_back(s[n]);
    if(s[n]==s[n+1]){
        ans.push_back('*');
    }
    solve(s, n+1, ans);
}
*/

int fact (int n){
    if(n<=1){
        return 1;
    }
    return n* (fact(n-1));
}

void subset(vector<int> &arr, vector<int> output, vector<vector<int>> &ans, int n){
    if(n>= arr.size()){
        ans.push_back(output);
        return; 
    }
}


int main(){
    // string s = "AABCDDEFAAAA";
    // string ans = "";
    // solve(s,0,ans);
    // cout<<ans;
    cout<<fact(5);

    


    
    return 0;
}