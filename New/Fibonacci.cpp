#include<iostream>
using namespace std;
//Fibonacci Series
int main(){
    int a=0,b=1,c,n;
    cin>>n;
    if (n==1){
        cout<<a;
    }
    else if (n==2){
        cout<<a<<", "<<b;
    }
    else if (n>2){
        cout<<a<<", "<<b<<", ";
        for (int i=3;i<=n;i++){
            c=a+b;
            cout<<c<<", ";
            a=b;
            b=c;
        }
    }
    else{
        cout<<"Enter valid positive integer";
    }
    return 0;
}