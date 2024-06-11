#include<iostream>
using namespace std;

int count_odd(int arr[],int n){
    int odd_count=0;
    for (int i=0;i<n;i++){
        if (arr[i]%2!=0){
            odd_count++;
        }
    }
    return odd_count;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/4;
    int codd=count_odd(arr,len);
    cout<<"Total number of odd elements="<<codd;
    return 0;
}