#include<iostream>
using namespace std;
//Basics of Ptr
int main(){
    int a;
    int *ptr=&a;
    cout<<"Value of variable a="<<a<<endl;
    cout<<"Value of variable a="<<*ptr<<endl;
    cout<<"Address of variable a="<<int(&a)<<endl;
    cout<<"Address of variable a="<<int(ptr)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl;
    return 0;
}