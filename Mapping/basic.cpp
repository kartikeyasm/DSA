#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>


using namespace std;


int main(){
    
    map<int,int> m;
    m[1]=5;
    pair<int,int> p= {2,4};
    pair<int,int> p2= make_pair(3,6);
    m.insert(p);
    m.insert(p2);
    
//Iterator
    map<int,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first << ": "<<it->second<<endl;
        it++;
    }

    cout<<endl;

    for(auto i:m){
        cout<<i.first<<": "<<i.second<<endl;
    }


//Searching
    cout<<m[1]<<endl;
    cout<<m.at(2)<<endl;

    //cout<<m.at(0)<<endl;      //Out of range error
    cout<<m[0]<<endl;           //No error as it will create a zero entry for corresponding key
    cout<<m.at(0)<<endl;        //Since key is made therefore it will also run withour error

//Size
    cout<<m.size()<<endl;

//To check presence
    cout<<m.count(2)<<endl;     //Return 1 if present else 0

//Erase/Delere
    m.erase(0);


    return 0;
}