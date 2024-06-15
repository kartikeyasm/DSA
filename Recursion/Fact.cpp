#include<iostream>
#include<vector>

using namespace std;

int fact(int n){
    if (n==0){      //Base Case=> Prevents from stack overflow and segmentation fault
        return 1;
    }
    return n*fact(n-1);
}


int main(){
    cout<<fact(5);

    return 0;
}