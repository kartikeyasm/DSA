#include<iostream>
using namespace std;
//Basics of Ptr
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<(arr)<<endl;
    cout<<(&arr)<<endl;
    cout<<&(arr[0])<<endl;
    cout<<*(arr)<<endl;   // arr[i]=*(arr+i)
    cout<<arr[0]<<endl;
    cout<<0[arr]<<endl;   //i[arr]=*(i+arr)
    cout<<*(0+arr)<<endl;

    int *ptr=&arr[0];
    cout<<*ptr<<endl;


    


    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr2;
    cout<<"Size of array= "<<sizeof(arr2)<<endl;
    cout<<"Size of ptr to array= "<<sizeof(p)<<endl;
    cout<<"Size of block of array= "<<sizeof(*arr2)<<endl;
    return 0;
}