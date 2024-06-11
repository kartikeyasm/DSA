#include<iostream>
using namespace std;
//Factorial
int main(){
    int n,fact=1;
    cin>>n;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"Factorial of "<<n<<"= "<<fact;
    return 0;
}