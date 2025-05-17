//https://www.naukri.com/code360/problems/partitions-with-given-difference_3751628?leftPanelTabValue=SUBMISSION

/* 
#include <bits/stdc++.h> 

int solve(vector<int> &arr, int index, int target, vector<vector<int>> &dp){
    if(index == 0){
        if(target == 0 && arr[0] == 0) return 2;
        if(target == 0 || target == arr[0]) return 1;
        return 0;
    }

    if(dp[index][target] != -1) return dp[index][target];

    int notPick = solve(arr, index-1, target, dp);
    int pick = 0;
    if(arr[index] <= target)
        pick = solve(arr, index-1, target - arr[index], dp);

    return dp[index][target] = pick + notPick;
}


int countPartitions(int n, int d, vector<int> &arr) {
    int sum = accumulate(arr.begin(), arr.end(), 0);

    if(sum < d || (sum - d) % 2 != 0) return 0;

    int target = (sum - d) / 2;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    return solve(arr, n-1, target, dp);
}
*/