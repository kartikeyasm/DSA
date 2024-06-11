#include<iostream>
#include<vector>

using namespace std;

/*Q567 Given two strings return true if a permutation of s1 as a substring is present in s2 */

bool anagram(string s1, string s2){
    vector<int> count1(300,0);
    vector<int> count2(300,0);
    for(int i=0;i<s1.length();i++){
        count1[int(s1[i])]++;
        count2[int(s2[i])]++;
    }
    for(int i=0;i<300;i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    return true;
}
    
bool checkInclusion(string s1, string s2) {
    int len1=s1.length();
    int len2=s2.length();
    int i=0;
    while(i<(len2-len1-1)){
        if(anagram(s2.substr(i,len1),s1)){
            cout<<s2.substr(i,len1)<<endl;
            cout<<s1<<endl;
            return true;    
        }
        i++;
    }
    return false;
}


int main(){
    string a="hello";
    string b="ooolleoooleh";
    cout<<checkInclusion(a,b);
}
