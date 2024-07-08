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

//Using Recursion O(logn), O(logn)
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


//Most Optimized O(logn), O(1)
double myPow(double x, int n) {
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    if(n<0){
        n=-n;
        x=1/x;
    }
    double result=1;
    double currentProduct=x;
    while(n>0){
        if(n%2==1){
            result*=currentProduct;
        }
        currentProduct*=currentProduct;
        n=n/2;
    }
    return result;
    
}



int main(){
    cout<<expo(INT_MAX,0)<<endl;
    cout<<optimised(2,10)<<endl;

    return 0;
}