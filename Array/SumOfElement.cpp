#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int len;
    cout<<"Enter len of array: ";
    cin>>len;
    int arr[100];
    for (int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Sum of all the elements in array= "<<sum(arr,len)<<endl;
}