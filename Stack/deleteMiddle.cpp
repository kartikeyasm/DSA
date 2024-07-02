#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//83 74 67 49 94 8 11 1  


//Recursive Method to Delete middle [T=>O(n), S=>O(n)]
void solve(stack<int>& s, int count, int n){
    if(count==n/2){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s,count+1,n);
    s.push(temp);
}


int main(){
    stack <int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        s.push(in);
    }
    int len=s.size();
    stack <int> temp;
    for(int i=0;i<len/2;i++){
        temp.push(s.top());
        s.pop();
    }
    int remove=s.top();
    s.pop();
    for(int i=0;i<len/2;i++){
        s.push(temp.top());
        temp.pop();
    }
    cout<<"Removed Element: "<<remove<<endl;
    cout<<endl;
    
    cout<<"Remaining Stack=> ";
    for(int i=0;i<len-1;i++){
        cout<<s.top()<<" , ";
        s.pop();
    }
    cout<<endl;
    return 0;
}