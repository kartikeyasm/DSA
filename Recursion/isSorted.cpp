#include<iostream>
#include<vector>

using namespace std;

/*Vid 36 Recursion Day-3*/

bool isSorted(int arr[], int n){
    if(n<=1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSorted(arr+1, n-1);
    
    
}

int sumArr(int arr[], int n){
    if(n==0){
        return 0;
    }
    return arr[0]+sumArr(arr+1,n-1);
}

bool LinearSearch(int arr[], int n, int target){
    if(n==0){
        return 0;
    }
    if(arr[0]==target){
        return 1;
    }
    return LinearSearch(++arr,n-1,target);
}

bool BinarySearch(int arr[], int s,int e, int target){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return 1;
    }
    else if(arr[mid]>target){
        return BinarySearch(arr,s,mid-1,target);
    }
    else{
        return BinarySearch(arr,mid+1,e,target);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<isSorted(arr,6)<<endl;
    cout<<sumArr(arr,6)<<endl;
    cout<<LinearSearch(arr,6,16)<<endl;
    cout<<BinarySearch(arr,0,5,16)<<endl;
    return 0;
}