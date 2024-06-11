#include<iostream>
using namespace std;

bool LSearch(int arr[],int n,int find){
    for(int i=0;i<n;i++){
        if (arr[i]==find){
            return true;
        }
    }
    return false;
}

int main(){
    int len;
    cin>>len;
    int arr[100];
    for (int i=0;i<len;i++){
        cin>>arr[i];
    }
    int find;
    cin>>find;
    if (LSearch(arr,len,find)){
        cout<<find<<" is present in array";
    }
    else{
        cout<<find<<" is not present in array.";
    }
    return 0;
}