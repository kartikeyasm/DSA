#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(string s) {
    vector<char> alpha;
    for(char i:s){
        if((i>='a' && i<='z')||(i>='A' && i<='Z')||(i>='0' && i<='9')){
            alpha.push_back(i);
        }   
    }
    for(int i=0;i<alpha.size();i++){
        cout<<alpha[i];
    }
    cout<<endl;
    int f=0;
    int l=alpha.size()-1;
    while(f<=l){
        if(alpha[f]!=alpha[l]){
            return 0;
        }
        f++;
        l--;
    }
    return 1;
}

int main(){
    string s="Kartikeya Shankar Mishra";
    cout<<s<<endl;
    isPalindrome(s);
    cout<<s<<endl;


}