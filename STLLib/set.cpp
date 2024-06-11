#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(6);
    s.insert(5);
    for (int i:s){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<s.count(5)<<endl;
    set<int>::iterator itr=s.find(5);  //Creates a pointer for the value 5
    set<int>::iterator itr2=s.begin(); //Creates a pointer for the first value
    cout<<*itr<<endl;
    s.erase(itr);
    s.erase(itr2);
    for(auto i:s){
        cout<<i<<", ";
    }
    cout<<endl;
    return 0;
}