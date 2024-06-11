#include<iostream>
using namespace std;
/*Int value of sqrt using binary search along numberline*/
long long int mySqrt(long long int x) {
        long long int s=0;
        long long int e=x;
        long long int ans=-1;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid>x){
                e=mid-1;
            }
            else if(mid*mid<=x){
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
/*To increase precision we can start adding 0.1 and check if (sqrt.1)^2>number */
int main(){
    int n=169;
    long long int a=mySqrt(n);
    cout<<a<<endl; //Int value
    float ans=a;
    float div=0.1;
    while(div>=0.0000001){
        while((ans+div)*(ans+div)<n){
            ans+=div;
        }
        div=div/10;
    }
    cout<<ans<<endl; //Precise Value
}