#include<iostream>
#include<vector>

using namespace std;

int fib(int n){
    if(n<=0){
        cout<<"Enter a number greater than 0"<<endl;
        return -1;
    }
    else if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);


}

int main(){
    cout<<fib(10);

    return 0;
}