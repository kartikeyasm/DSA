#include<iostream>
using namespace std;

void swap(int *a,int *b){
    *a=*a -*b;
    *b=*a +*b;
    *a=*b -*a;
}

void rev(int arr[],int n){
    int i=0;
    n--;
    while(i<n){
        swap(&arr[i],&arr[n]);
        i++;
        n--;
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
    rev(arr,len);
    cout<<endl<<"Print after rev:\t";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<", ";
    }

}