//Merge K sorted Array
//https://www.naukri.com/code360/problems/merge-k-sorted-arrays_975379?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION

/*Approach 1 Brute Force, O(N*Klog(N*K))  O(N*K)
//Concatinate all the arrays and then apply sorting on whole array

*/


/*Approach 2 Using a min heap, O(N*Klog(K))  O(N*K)

//Create a min heap that stores the first element of all the sorted arrays and then find the min of all the starting elements
//Push that element into ans array and push next element of that element's array into it
//Repeat this till heap is not empty


#include <bits/stdc++.h> 
#include <queue>

class node{
    public:
        
        int data;
        int i;
        int j;
        node(int data, int i, int j){
            this->data=data;
            this->i=i;
            this->j=j;
        }
};

class compare{
    public:    
        bool operator()(node* a, node* b){
            return a->data > b->data;
        }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<node*, vector<node*>, compare> mini;
    vector<int> ans;
    for(int i=0;i<k;i++){
        mini.push(new node(kArrays[i][0], i, 0));    
    }
    node* value;
    while(!mini.empty()){
        value=mini.top();
        ans.push_back(value->data);
        mini.pop();
        int i=value->i;
        int j=value->j;
        if(j+1 < kArrays[i].size()){
            mini.push(new node(kArrays[i][j+1], i, j+1));
        }
    }

    return ans;

}




*/