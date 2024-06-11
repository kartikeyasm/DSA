//Count the number of 1 bits in an unsigned int

//Method 1 => Convert the int to binary number and then by using modulo opperator count the number of 1s.

//Very important method:-
//Method 2 => if (num&1==True) then the number has 1 on its most significant bit therefore count++ and then right shift the given num
 
#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"Enter a no. ";
    cin>>n;
    while (n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    return 0;
}