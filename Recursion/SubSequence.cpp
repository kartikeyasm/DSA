#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  
//Similar to Subsets.cpp (Based on inclusion and exclusion)

/*
You are given a string 'STR' containing lowercase English letters from a to z inclusive. Your task is to find all non-empty possible subsequences of 'STR'.

A Subsequence of a string is the one which is generated by deleting 0 or more letters from the string and keeping the rest of the letters in the same order.


Sample Input 1:
1 
abc

Sample Output 1:
a ab abc ac b bc c

Explanation of sample input 1:
All possible subsequences of abc are :  
“a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”
*/


void solve(string str, string output, int index, vector<string> &ans){
	if(index>=str.size()){
		if(output!=""){
			ans.push_back(output);
		}
		return;
	}
	//Exclusion
	solve(str, output, index+1, ans);
	//Inclusion
	output+=str[index];
	solve(str, output, index+1, ans);

}

vector<string> subsequences(string str){
	
	// Write your code here
	int index=0;
	vector<string> ans;
	string output="";
	solve(str, output, index, ans);
	return ans;
}


int main(){
    string s="abc";
    vector<string> ans=subsequences(s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<", ";
    }
    cout<<endl;

    return 0;
}