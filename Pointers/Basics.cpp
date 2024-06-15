#include<iostream>
using namespace std;

int main(){

    //int *p;  //Wild Pointer //Bad Practice pointer to a random garbage int is created and it could lead to some adverse effect on system
    //int *p=0; //Segmentation fault as this memory is already reserved and cannot be access by user, commonly used to signify null pointer
    /*
    void *ptr; //Void Pointer
    int i=5;
    ptr=&i;
    */
    int a=5;
    int *ptr=&a;
    cout<<"Value of a= "<<a<<'\t'<<*ptr<<endl;  //* is a dereferencing operator 
    cout<<"Address of a= "<<&a<<'\t'<<ptr<<endl;
    a++;
    cout<<"Value of a= "<<a<<'\t'<<*ptr<<endl;
    cout<<"Address of a= "<<&a<<'\t'<<ptr<<endl;
    cout<<"Address of ptr= "<<&ptr<<'\t'<<endl;
    cout<<"Size of ptr= "<<sizeof(ptr)<<'\t'<<endl;
    ptr++;
    cout<<"Value of a= "<<a<<'\t'<<*ptr<<endl;
    cout<<"Address of a= "<<int(&a)<<'\t'<<int(ptr)<<endl;
    cout<<"Value at pointer= "<<*ptr<<'\t'<<endl;


//    int &num2=num; //Reference Variable
    return 0;

}