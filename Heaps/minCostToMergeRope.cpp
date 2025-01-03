//https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

//Special Note : Can't be done using array as we need to store the current value into array and then find two min out of all elements [including last added]

// Corner case for which we can't use array arr={2,4,6,7,9}

// O(NlogN) , O(n)


/*
long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        for(int i=0; i<n;i++){
            minHeap.push(arr[i]);
        }
        long long ans=0;
        while(minHeap.size()>1){
            long long a=minHeap.top();
            minHeap.pop();
            long long b=minHeap.top();
            minHeap.pop();
            long long len=a+b;
            ans+=len;
            minHeap.push(len);
        }
        return ans;
    }
*/