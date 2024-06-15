#include<iostream>
#include<vector>
#include<string>

using namespace std;

int compress(vector<char>& chars) {
    int i=0;
    int j=0;
    int k=0;
    int len=chars.size();
    while(i<len){
        if(j<len && chars[i]==chars[j]){
            j++;
            continue;
        }
        else{
            chars[k++]=chars[i];
            int count=j-i;
            if(j-i>1){
                string cnt_str=to_string(count);
                for (char c: cnt_str){
                    chars[k++]=c;
                }
            }
            i=j;
        }
    }
    return k;
}


int main(){
    vector<char> chars;
    string s="aabbccc";
    for (char ch:s){
        chars.push_back(ch);
    }
    for (char ch:chars){
        cout<<ch;
    }
    cout<<endl;
    compress(chars);
    for (char ch:chars){
        cout<<ch;
    }
    return 0;
}