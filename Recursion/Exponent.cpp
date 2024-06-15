#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int expo(int a,int n){
    /* 
    if(a==0 && n==0){
        return 0/0;
    } 
    */
    if(n==0){
        return 1;
    }
    return a*(expo(a,n-1));
}

int main(){
    cout<<expo(INT_MAX,0);

    return 0;
}