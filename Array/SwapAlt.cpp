#include<iostream>
using namespace std;

//Swap Alternative Elements in an Array

void swap(int *a,int *b){
    *a=*a -*b;
    *b=*a +*b;
    *a=*b -*a;
}

void swapalt(int arr[],int n){
    for (int i=1;i<=n;i+=2){
        if ((i==n)&&(n%2!=0)){
            return;
        }
        swap(&arr[i],&arr[i-1]);
    }
}

int main(){
    int len;
    cin>>len;
    int arr[100];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Print before rev:\t";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<", ";
    }
    swapalt(arr,len);
    cout<<endl<<"Print after rev:\t";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<", ";
    }

}