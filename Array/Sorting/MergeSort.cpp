#include<iostream>
#include<vector>

using namespace std;

void merge(int arr[], int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    //Create two arrays first=>left and second=>right
    int *first= new int[len1];
    int *second= new int[len2];
    int mainArrayIndex=s;
    //Copy Values of array into first and second
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len1;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //Sort two arrays
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }

    //Delete copy arrays
    delete []first;
    delete []second;
}

void MergeSort(int arr[], int s, int e){
    
    //Base Case
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    
    //Sort Left Part
    MergeSort(arr,s,mid);
    //Sort Right Part
    MergeSort(arr,mid+1,e);
    //Merge Two Sorted Array
    merge(arr,s,e);

}

int main(){
    int arr[]={2,9,1,4,5,7};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    MergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;


    return 0;
}