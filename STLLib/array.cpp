#include<iostream>
#include<array>

using namespace std;

int main(){
    int basic[]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        if(i==size-1){
            cout<<a[i]<<endl;
            break;
        }
        cout<<a[i]<<", ";
    }
    cout<<"Element at 2nd index: "<<a.at(2)<<endl; //O(1)
    cout<<"Element is empty: "<<a.empty()<<endl;   //O(1)
    cout<<"First element: "<<a.front()<<endl;      //O(1)
    cout<<"Last element: "<<a.back()<<endl;       //O(1)


}