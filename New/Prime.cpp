#include<iostream>
using namespace std;
//Check wheter a number is prime or not
int main(){
    int n;
    cin>>n;
    for (int i=2;i<n/2;i++){
        if (n%i==0){
            cout<<n<<" is a composite number";
            return 0;
        }
    }
    cout<<n<<" is a prime number";
    return 0;
}