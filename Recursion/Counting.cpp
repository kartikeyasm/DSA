#include<iostream>
#include<vector>
#include<climits>

using namespace std;

void countDown(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    countDown(n-1);
}

void countUp(int n){
    if(n==0){
        return;
    }
    countUp(n-1);
    cout<<n<<endl;
}

int main(){

    countDown(INT_MAX-2147418760);
    countUp(10000);

    return 0;
}