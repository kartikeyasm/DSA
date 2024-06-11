#include<iostream>
using namespace std;
//Array
int main(){
    int arr[10]={5,10,15,20};
    cout<<int(arr)<<endl;  //Address of Array[0]
    cout<<int(&arr)<<endl;  //Address of Array[0]  Both will give same output as there will be no seperate memory created to store address of array
    cout<<int(&arr[0])<<endl;
    cout<<*arr<<endl;
    cout<<arr[0]<<endl;
    cout<<int(arr+1)<<endl;  //Address of Array[1]
    cout<<*(arr+1)<<endl;  //Value of Array[1]
    cout<<arr[1]<<endl;  //Value of Array[1]
    cout<<1[arr]<<endl;  //Value of Array[1]
    /*a=a+3; a++;        //All these statements are invalid as we can not reassigne an array once declared*/
    
    return 0;
}