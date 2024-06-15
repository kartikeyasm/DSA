#include<iostream>
#include<vector>

using namespace std;


int main(){
    char ch[]="abcdef";
    char *ptr=ch;
    cout<<ch<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    

    char c='z';
    char *ptr2=&c;
    cout<<ptr2;


    return 0;
}