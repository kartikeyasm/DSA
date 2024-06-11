#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    reverse(v.begin(),v.end());
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<", ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<", ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    sort(v.begin(),v.end());   //Intro Sort (Combination of Heap, Quick, Insertion sort)
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<", ";
    }
    cout<<endl;
    
    
    
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;




    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    cout<<max(5,7)<<endl;
    cout<<max(5,7)<<endl;
    cout<<min(5,7)<<endl;
    int a=5, b=7;
    swap(a,b);
    cout<<a<<", "<<b<<endl;
    return 0;
}