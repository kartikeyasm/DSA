#include<iostream>
using namespace std;

int rotSearch(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[]={2,3,5,8};
    int n=rotSearch(arr,4,3);
    cout<<n;
    return 0;
}