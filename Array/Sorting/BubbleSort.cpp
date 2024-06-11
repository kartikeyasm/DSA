#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,1,10,2,6};
    int len=sizeof(arr)/4;
    for (int i=0;i<len-1;i++){
        for (int j=0;j<len-1-i;j++){
            if (arr[j]>arr[j+1]){
                int dummy=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=dummy;
            }
            for (int i=0;i<len;i++){
                cout<<arr[i]<<",";
            }
            cout<<endl;
        }
        cout<<endl;
    }    
    return 0;
}