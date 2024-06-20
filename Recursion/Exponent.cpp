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


int optimised(int a, int b){
    if (b==0){
        return 1;
    }
    if(b%2==0){
        return (optimised(a,b/2)*optimised(a,b/2));
    }
    else{
        return (optimised(a,b/2)*optimised(a,b/2)*a);
    }
}

int main(){
    cout<<expo(INT_MAX,0)<<endl;
    cout<<optimised(2,10)<<endl;

    return 0;
}