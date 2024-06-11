#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3};
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
    cout<<"First element: "<<v.front()<<endl;     
    cout<<"Last element: "<<v.back()<<endl; 
    v.pop_back();  //Void function and does not return popped value
    cout<<"Last element: "<<v.back()<<endl; 
    v.clear();
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<endl<<endl<<endl;
    vector<int> vec(5,1);  //To initialize a vector with same elements
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<",";
    }
    cout<<endl;

    vector<int> vec2(vec);  //To copy a vector
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<",";
    }
    cout<<endl;


    
}