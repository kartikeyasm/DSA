#include<iostream>
using namespace std;

int min_i(int arr[],int n,int s){
    int min=arr[s];
    int index=s;
    for (int i=s+1;i<n;i++){
        if (min>arr[i]){
            min=arr[i];
            index=i;
        }
    }
    return index;
}

int main(){
    int arr[]={4,3,1,10,2,6};
    int len=sizeof(arr)/4;
    for (int i=0;i<len-1;i++){
        int min_pos=min_i(arr,len,i);
        if(min_pos!=i){
            int dummy=arr[i];
            arr[i]=arr[min_pos];
            arr[min_pos]=dummy;
        }
    }
    for (int i=0;i<len;i++){
                cout<<arr[i]<<",";
            }
            cout<<endl;
    return 0;
}