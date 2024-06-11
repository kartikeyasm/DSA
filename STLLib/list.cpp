#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    /* 
    for(int i=0;i<l.size();i++){   
        cout<<l[i]<<", "; //Executed using doubly linked list therefore cant be access directly
    }
    */

    for(int i:l){   //i belongs to l (i:l)
        cout<<i<<", ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
    l.pop_back();
    l.pop_front();
    for(int i:l){   //i belongs to l (i:l)
        cout<<i<<", ";
    }
    cout<<endl;
    list <int> l5(10,5);  //Creates a list of 10 elements with initial value 5
    for(int i:l5){   //i belongs to l (i:l)
        cout<<i<<", ";
    }
    cout<<endl;

    list <int> li(l5); //Creates a new list and copy data of l5 to it
    for(int i:l5){   //i belongs to l (i:l)
        cout<<i<<", ";
    }
    cout<<endl;
    return 0;
}