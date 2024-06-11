#include<iostream>
#include<vector>

using namespace std;

/*Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other 
or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, act and tac are an anagram of each other. Strings a and b can only contain lower case alphabets. */

bool isAnagram(string a, string b){
    vector<int> arr1(26,0);
    vector<int> arr2(26,0);
    for(char i:a){
        arr1[int(i)-97]++;
    }
    for(char i:b){
        arr2[int(i)-97]++;
    }
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;        
}

int main(){
    string a="KSM";
    string b="SKM";
    cout<<"String a: "<<a<<" and String b: "<<b<<" are Anagram: "<<isAnagram(a,b)<<endl;
    return 0;
}