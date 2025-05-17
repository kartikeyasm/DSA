//Similar to isSubsetSum.cpp

//https://leetcode.com/problems/partition-equal-subset-sum/


//Space Optimized question
/*
bool canPartition(vector<int>& nums) {
    int sum = 0;
    for(int i: nums){
        sum+=i;
    }
    if(sum%2!=0){
        return false;
    }
    int target = sum/2;
    int n = nums.size();
    vector<bool> prev(target+1, false), curr(target+1, false);
    prev[0] = true;
    curr[0] = true;
    for(int i=1; i<n; i++){
        for(int j=1; j<=target; j++){
            bool notPick = prev[j];
            bool pick = false;
            if(j-nums[i]>=0){
                pick = prev[j-nums[i]];
            }
            curr[j] = pick || notPick;
        }
        prev = curr;
    }
    return prev[target];
}
*/