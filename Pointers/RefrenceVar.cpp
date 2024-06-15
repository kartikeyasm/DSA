#include<iostream>
#include<vector>

using namespace std;

void updateRefrence(int &j){
    j++;
}

void updateValue(int i){
    i++;
}

int main(){
    int i=5;
    int &j=i;  //Creating a refrence variable
    i++;
    j++;
    cout<<i<<endl;
    cout<<j;
    updateValue(i);  //Global value remains same
    cout<<endl;
    cout<<i<<","<<j<<endl;
    updateRefrence(i);      //Global value gets updated as it is passed by refrence
    cout<<endl;
    cout<<i<<","<<j<<endl;
    return 0;
}