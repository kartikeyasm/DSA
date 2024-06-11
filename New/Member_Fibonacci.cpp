#include<iostream>
using namespace std;
//To check membership of Fibonacci Series
int main(){
    int a=0,b=1,c,n;
    cin>>n;
    int arr[n];
    if (n==1){
        arr[0]=a;
    }
    else if (n==2){
        arr[0]=a,arr[1]=b;
    }
    else if (n>2){
        arr[0]=a,arr[1]=b;
        for (int i=3;i<=n;i++){
            c=a+b;
            arr[i-1]=c;
            a=b;
            b=c;
        }
    }
    else{
        cout<<"Enter valid positive integer";
    }
    int find,flag=0;
    cin>>find;
    for (int i=0;i<n;i++){
        if(arr[i]==find){
            flag=1;
            cout<<find<<" is a fibonacci number.";
            break;
        }
    }
    if (flag==0){
        cout<<find<<" is not a fibonacci number.";
    }
    return 0;
}