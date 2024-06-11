#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> maxH; //Max Heap
    priority_queue<int, vector<int>, greater<int>> minH;  //Min Heap


    maxH.push(1);
    maxH.push(3);
    maxH.push(2);
    maxH.push(0);
    int n=maxH.size();
    for (int i=0;i<n;i++){
        cout<<maxH.top()<<", ";
        maxH.pop();
    }


}