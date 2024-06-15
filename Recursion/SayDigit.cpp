#include<iostream>
#include<vector>

using namespace std;

void num(int n){
    if(n==0){
        cout<<"Zero";
    }
    else if(n==1){
        cout<<"One";
    }
    else if(n==2){
        cout<<"Two";
    }
    else if(n==3){
        cout<<"Three";
    }
    else if(n==4){
        cout<<"Four";
    }
    else if(n==5){
        cout<<"Five";
    }
    else if(n==6){
        cout<<"Six";
    }
    else if(n==7){
        cout<<"Seven";
    }
    else if(n==8){
        cout<<"Eight";
    }
    else if(n==9){
        cout<<"Nine";
    }
}


void sayDigit(int n){
    if(n==0){
//        cout<<"Zero";
        return;
    }
    
    sayDigit(n/10);
    num(n%10);
    cout<<" ";
    
}


int main(){
    int n;
    cin>>n;
    sayDigit(n);

    return 0;
}