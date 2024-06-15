#include<iostream>
#include<vector>

using namespace std;

/*LCM of two numbers*/

/*LCM(a,b) * GCD(a,b) = a*b */

/*LCM(a,b) = (a*b)/GCD(a,b)    */


int euclidGCD(int n, int m){
    if(n==0){
        return m;
    }
    if(m==0){
        return n;
    }
    if(n>m){
        return euclidGCD(n-m,m);
    }
    else{
        return euclidGCD(n,m-n);
    }
}

int LCM(int n,int m){
    int gcd=euclidGCD(n,m);
    return n*m/gcd;
}

int main(){
    cout<<"LCM of 2,3= "<<LCM(2,3);

    return 0;
}