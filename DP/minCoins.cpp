//https://www.naukri.com/code360/problems/minimum-elements_3843091?leftPanelTabValue=SUBMISSION


//Top Down Approach
/*
#include <bits/stdc++.h> 
int solve(vector<int> &num, int index, int target, vector<vector<int>> &dp){
    if(index==0){
        if(target%num[0]==0){
            return target/num[0];
        }
        return 1e9;
    }
    if(dp[index][target] != -1){
        return dp[index][target];
    }

    int notPick = solve(num, index-1, target, dp);
    int pick = INT_MAX;
    if(target>=num[index]){
        pick = 1 + solve(num, index, target-num[index], dp);
    }
    dp[index][target] = min(notPick, pick);
    return dp[index][target];
}

int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    int n = num.size();
    vector<vector<int>> dp(n, vector<int>(x+1, -1));
    int ans = solve(num, n-1, x, dp);
    if(ans>=1e9){
        return -1;
    }
    return ans;
}
*/


//Bottom Up Approach
/*
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    int n = num.size();
    vector<vector<int>> dp(n, vector<int>(x+1, 0)); 
    //int ans = solve(num, n-1, x, dp);
    for(int i=0; i<=x; i++){
        if(i%num[0] == 0){
            dp[0][i] = i/num[0];
        }
        else{
            dp[0][i] = 1e9;
        }
    }
    for(int index = 1; index<n; index++){
        for(int target = 0; target<= x; target++){
            int notPick = dp[index-1][target];
            int pick = INT_MAX;
            if(target>=num[index]){
                pick = 1 + dp[index][target-num[index]];
            }
            dp[index][target] = min(notPick, pick);
        }
    }
    int ans = dp[n-1][x];
    if(ans>=1e9){
        return -1;
    }
    return ans;
}
*/