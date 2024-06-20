#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

//Q Permutations of a String  (Page 77-79)

/*
Problem statement
You are given a string 'STR' consisting of lowercase English letters. Your task is to return all permutations of the given string in lexicographically increasing order.

String A is lexicographically less than string B, if either A is a prefix of B (and A ≠ B), or there exists such i (1 <= i <= min(|A|, |B|)), that A[i] < B[i], and for any j (1 <= j < i) A[i] = B[i]. Here |A| denotes the length of the string A.

For example :

If the string is “bca”, then its permutations in lexicographically increasing order are { “abc”, “acb”, “bac”, “bca”, “cab”, “cba” }.
*/




/* 1st Approach (Using maps, causes TLE)
void solve(string str, string output, int index, vector<string> &ans, map<char, bool> m){
    if(index>=str.size()){
        ans.push_back(output);
        return;
    }
    for(int i=0;i<str.size();i++){
        if((m[str[i]])==false){
            m[str[i]]=true;
            output.push_back(str[i]);
            solve(str, output, index+1, ans, m);
            output.pop_back();
            m[str[i]]=false;
        }

    }

}


vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    if(str.size()==0){
        return ans;
    }
    string output="";
    int index=0;
    map<char,bool> m;
    for(int i=0;i<str.size();i++){
        m[str[i]]=false;
    }
    solve(str, output, index, ans, m);
    sort(ans.begin(),ans.end());
    return ans;
}


*/

//2nd Approach (Optimal, Using Swapping)

void solve(string &str, int index, vector<string> &ans){
    if(index>=str.size()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.size();i++){
        swap(str[index],str[i]);
        solve(str,index+1,ans);
        swap(str[index],str[i]); //BackTrack
    }
}


vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    if(str.size()==0){
        return ans;
    }
    int index=0;
    solve(str, index, ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    string temp="bca";
    vector<string> ans=generatePermutations(temp);
    for(string s:ans){
        cout<<s<<", ";
    }
    cout<<endl;
    return 0;
}