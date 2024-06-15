#include<iostream>
#include<vector>

using namespace std;


int main(){
    int a=5;
    int *p1=&a;
    int **p2=&p1;  //Pointer to a pointer
    int *p3=p1;    //Copying a pointer
    cout<<a<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<*p3<<endl;

    return 0;
}