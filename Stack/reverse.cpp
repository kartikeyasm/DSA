#include<iostream>
#include<vector>
#include<stack>
using namespace std;


//Recursive Method
void rev(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    rev(s);
    s.push(temp);

}





int main(){
    stack<char> s;
    string str="KSM";
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    int i=0;
    while(i<str.size()){
        str[i++]=s.top();
        s.pop();
    }
    cout<<str;
    return 0;
}