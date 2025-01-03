//https://www.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

// TC=>O(m+n)  SC=>O(m+n)

/*
void heapify(vector<int> &arr, int i, int n){
    while(i<n/2){
        int largest=i;
        int left= 2*i+1;
        int right= 2*i+2;
        if(left<n && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<n && arr[largest]<arr[right]){
            largest=right;
        }
        if(i!=largest){
            swap(arr[i], arr[largest]);
            i=largest;
        }
        else{
            return;
        }
    }
}


vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
    // your code here
    vector<int> c;
    for(int i=0;i<n;i++){
        c.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        c.push_back(b[i]);
    }
    
    int lastParent= (m+n)/2 - 1;
    for(int i=lastParent; i>=0; i--){
        heapify(c, i,m+n);
    }
    
    return c;
}

*/