#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<", ";
    }
    cout<<endl;
    d.pop_back();
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<", ";
    }
    cout<<endl;
    d.pop_front();
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<", ";
    }
    cout<<endl;

    return 0;
}