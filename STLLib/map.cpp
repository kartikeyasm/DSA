#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;
    m[1]="KSM";
    m[2]="VSM";
    m[3]="KSM";
    for (auto i:m){
        cout<<i.first<<": ";
        cout<<i.second<<endl;
    }
    cout<<m[2]<<endl;
    m.insert({4,"VSM"});
    cout<<m[4]<<endl;
    for (auto i:m){
        cout<<i.first<<": ";
        cout<<i.second<<endl;
    }

    m.erase(4);
    for (auto i:m){
        cout<<i.first<<": ";
        cout<<i.second<<endl;
    }


    return 0;
}