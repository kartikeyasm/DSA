#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dummy=n;
    int sum=0, prod=1;
    while (dummy>0){
        sum+=dummy%10;
        prod*=dummy%10;
        dummy/=10;
    }
    cout<<prod-sum;
    return 0;
}