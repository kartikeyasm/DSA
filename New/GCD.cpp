#include<iostream>
using namespace std;
//GCD of two numbers
int main(){
    int a,b,GCD=1,min;
    cin>>a;
    cin>>b;
    if (a>b){
        min=b;
    }
    else{
        min=a;
    }
    for (int i=2;i<=min;i++){
        if(a%i==0 && b%i==0){
           GCD=i; 
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" ="<<GCD;
    return 0;
}