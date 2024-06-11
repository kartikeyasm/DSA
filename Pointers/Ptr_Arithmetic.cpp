#include<iostream>
using namespace std;
//Ptr Arithmetic
int main(){
    int a=0;
    int *ptr=&a; 
    cout<<"Value of variable a="<<a<<endl;
    cout<<"Value of variable a="<<*ptr<<endl;
    cout<<"Address of variable a="<<int(&a)<<endl;
    cout<<"Address of variable a="<<int(ptr)<<endl;
    int *ptr1=ptr;
    ptr++; 
    cout<<"Value of variable a="<<a<<endl;
    cout<<"Value of variable a="<<*ptr<<endl;
    cout<<"Address of variable a="<<int(&a)<<endl;
    cout<<"Address of variable a="<<int(ptr)<<endl;
    cout<<(ptr>ptr1)<<endl;

    return 0;
}