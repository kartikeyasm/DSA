#include<iostream>
using namespace std;
//Largest of three numbers
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b){
        if (a>c){
            cout<<a<<" is largest number";
        }
        else{
            cout<<c<<" is largest number";
        }
    }
    else{
        if (b>c){
            cout<<b<<" is largest number";
        }
        else{
            cout<<c<<" is largest number";
        }
    }
    return 0;
}