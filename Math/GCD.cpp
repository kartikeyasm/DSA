#include<iostream>
#include<vector>

using namespace std;

int gcd(int n,int m){
    int gcd=1;
    int min;
    if(n>m){
        min=m;
    }
    else{
        min=n;
    }
    for(int i=2;i<=min;i++){
        if((n%i==0)&&(m%i==0)){
            gcd=i;
        }
    }
    return gcd;
}


int euclid(int n,int m){
    while(n-m>0){
        n=n-m; 
    }
    int ans=gcd(n,m);
    return ans;

}

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
int main(){
    cout<<gcd(8,12);
    cout<<endl<<euclid(8,12);
    cout<<endl<<euclidGCD(8,12);
    return 0;
}