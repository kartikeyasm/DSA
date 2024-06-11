#include<iostream>
using namespace std;
//Largest of n numbers
int main(){
    int n;
    cin>>n;
    int arr[n],max;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (i==0){
            max=arr[i];
        }
        else{
            if (arr[i]>max){
                max=arr[i];
            }
        }
    }
    cout<<"Largest of above entered numbers="<<max;
    return 0;
}