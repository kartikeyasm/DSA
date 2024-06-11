#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void intersection(int arr1[],int arr2[],int n,int m){
    
    for (int i=0;i<n;i++){
        int count=0;
        for (int j=0;j<m;j++){
            if (arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count>=1){
            cout<<arr1[i]<<",";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr1[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[100];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    intersection(arr1,arr2,n,m);


    return 0;
}