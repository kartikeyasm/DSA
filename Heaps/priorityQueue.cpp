#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main(){
    priority_queue<int> pq;   //It is a max heap
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"Top of Heap : "<< pq.top()<<endl;
    pq.pop();
    cout<<"Top of Heap : "<< pq.top()<<endl;
    cout<<"Size : "<< pq.size()<<endl;
    cout<<"Is pq empty : "<<pq.empty()<<endl;

    cout<<endl<<endl<<endl;
    //Min Heap

    priority_queue<int , vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(4);
    minHeap.push(3);
    minHeap.push(1);

    cout<<"Top of Min Heap : "<< minHeap.top()<<endl;
    pq.pop();
    cout<<"Top of Heap : "<< minHeap.top()<<endl;
    cout<<"Size : "<< minHeap.size()<<endl;
    cout<< (minHeap.empty() ? "minHeap is empty" : "minHeap is not empty")<<endl; 
    return 0;
}