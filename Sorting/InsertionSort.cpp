#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for (int i=1;i<n;i++){
        int num=arr[i];
        int j=i;
        while(j>0){
            if(arr[j-1]>num){
                arr[j]=arr[j-1];
            }
            else{
                break;
            }
            j--;
        }
        arr[j]=num;
    }
}



void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int arr[]={10,1,7,4,8,2,11};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}