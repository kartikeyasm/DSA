#include<iostream>
#include<vector>

using namespace std;


/*
void BubbleSort(int arr[],int n){
    if(n<=1){
        return;
    }
    if(arr[0]>arr[1]){
        swap(arr[0],arr[1]);
    }
    BubbleSort(arr+1,n);
    BubbleSort(arr,n-1);

}

*/
void BubbleSort(int arr[],int n){
    if(n<=1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);

}




int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    BubbleSort(arr,n);
    cout<<"After Sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    return 0;
}