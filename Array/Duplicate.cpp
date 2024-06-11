#include<iostream>
using namespace std;

//Find the first Duplicate element in the array

int duplicate(int arr[],int n){
    for (int i=0;i<n;i++){
        int count=0;
        for (int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int len;
    cin>>len;
    int arr[100];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    if (duplicate(arr,len)==-1){
        cout<<"No duplicate element is present in the array."<<endl;
    }
    else{
        cout<<"First duplicate element= "<<duplicate(arr,len)<<endl;
    }
    return 0;
}