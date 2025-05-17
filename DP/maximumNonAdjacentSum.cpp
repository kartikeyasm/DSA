//https://www.naukri.com/code360/problems/maximum-sum-of-non-adjacent-elements_843261?interviewProblemRedirection=true&search=maximum%20sum%20of%20&leftPanelTabValue=SUBMISSION


//Memoization
/*
#include <bits/stdc++.h> 

int solve(vector<int> &nums, int index, vector<int> &dp){
    if(index<0){
        return 0;
    }
    if(index == 0){
        return nums[0];
    }
    if(dp[index] != -1){
        return dp[index];
    }
    int pick =nums[index] + solve(nums, index-2, dp);
    int notPick = solve(nums, index-1, dp);
    dp[index] = max(pick, notPick);
    return dp[index];
    
}


int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    vector<int> dp(n,-1);
    return solve(nums, n-1, dp);
    
}


*/

//Tabulation
/*
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    vector<int> dp(n,-1);
    //return solve(nums, n-1, dp);
    dp[0] = nums[0];
    for(int i=1; i<n; i++){
        int take = nums[i];
        if(i>1){
            take += dp[i-2];
        }
        int notTake = dp[i-1];
        dp[i] = max(take, notTake);
    }
    return dp[n-1];
}
*/

//Space Optimization
/*
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    //vector<int> dp(n, -1);
    //return solve(nums, n-1, dp);
    int prev = nums[0];
    int prev2 = 0;
    int ans = prev;
    for(int i=1; i<n; i++){
        int take = nums[i];
        if(i>1){
            take += prev2;
        }
        int notTake = prev;
        ans = max(take, notTake);
        prev2 = prev;
        prev = ans;
    }
    return ans;
}
*/