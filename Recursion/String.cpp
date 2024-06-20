#include<iostream>
#include<vector>

using namespace std;

void reverse(string s,int start=0){
    if(s.size()==0){
        return;
    }
    if(s.size()-1==start){
        cout<<s[start];
        return;
    }
    reverse(s, start+1);
    cout<<s[start];
}

void rev(string &s, int i, int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    rev(s,++i,--j);
}

bool checkPalindrome(string s, int i=0){
    int len=s.size();
    if(i>(len-1-i)){
        return 1;
    }
    if(s[i]!=s[len-1-i]){
        return 0;
    }
    return checkPalindrome(s,++i);
}

int main(){
    reverse("KSM");
    string s="KSM";
    rev(s,0,2);
    cout<<endl<<s<<endl;
    cout<<checkPalindrome(s);
    
    return 0;
}