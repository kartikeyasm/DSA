#include<iostream>
using namespace std;

int minIndex(int arr[],int i, int len){
    int min=i;
    while(i<len){
        if(arr[i]<arr[min]){
            min=i;
        }
        i++;
    }
    return min;
}

void selectionSort(int arr[], int len){
    for(int i=0;i<len-1;i++){
        int min=minIndex(arr,i, len);
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}


int main(){
    int arr[10]={10,5,5,6,4,8,6,1,2,0};
    int len=sizeof(arr)/sizeof(int);
    selectionSort(arr, len); 
    for (int i=0;i<len;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}