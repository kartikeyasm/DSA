#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *ptr=&num;
    int &num2=num; //Reference Variable
    num++;
    num2++;
    cout<<int(ptr)<<" "<<int(&num)<<endl;
    cout<<*ptr<<" "<<num<<endl;
    (*ptr)++;
    ptr++;
    cout<<num<<endl;
    cout<<*ptr<<endl;
    cout<<int(ptr);

}