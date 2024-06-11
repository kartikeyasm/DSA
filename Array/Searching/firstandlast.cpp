#include<iostream>
using namespace std;


int main(){
    int arr[8]={0,0,1,1,2,2,2,2};
    int k=2;
    int n=8;
    int first=-1;
    int last=-1;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            first=mid;
            end=mid-1;  
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    start=0;
    end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"first occurance: "<<first<<endl;
    cout<<"last occurance: "<<last;
    return 0;
}