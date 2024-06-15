#include<iostream>
#include<vector>

using namespace std;

#define PI 3.1415 //Macros

int a=5;  //Global Variable [Bad Practice=> Can be changed by any function and can lead to inconsistancy in code]

void func1(){
    cout<<a<<endl;
}

int main(){
    int r;
    int a=6;
    cin>>r;
    cout<<"Area= "<<PI*r*r<<endl;
    cout<<a<<endl;
    func1();
    {
        int a=100;
        cout<<a;
    }

    return 0;
}