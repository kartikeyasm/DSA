
//https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
//kth Smallest Elelment of an array 

//O(NlogK) , O(k)

/* 
int kthSmallest(vector<int> &arr, int k) {
    // code here
    int n=sizeof(arr)/sizeof(int);
    priority_queue<int> pq;
    
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    
    for(int i=k;i<n;i++){
        if(pq.top()>arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
    
} */