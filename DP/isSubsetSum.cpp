//https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

//Top Down
/*
bool solve(int i, int target, vector<int> &arr, vector<vector<int>> &dp){
    if(target==0){
        return true;
    }
    if(i == 0){
        return target==arr[0];
    }
    if(dp[i][target]!=-1){
        return dp[i][target];
    }
    bool notPick = solve(i-1, target, arr, dp);
    bool pick = false;
    if(target-arr[i]>=0){
        pick = solve(i-1, target-arr[i], arr, dp);
    }
    dp[i][target] = pick || notPick;
    return dp[i][target];
}


bool isSubsetSum(vector<int>& arr, int target) {
    // code here
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int> (target+1, -1));
    return solve(n-1, target, arr, dp);
}
*/


//Tabulation
/*
bool isSubsetSum(vector<int>& arr, int target) {
    // code here
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool> (target+1, false));
    //return solve(n-1, target, arr, dp);
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }
    dp[0][arr[0]] = true;    //WHY?????????
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=target; j++){
            bool notPick = dp[i-1][j];
            bool pick = false;
            if(j-arr[i]>=0){
                pick = dp[i-1][j-arr[i]];
            }
            dp[i][j] = pick || notPick;
        }
    }
    return dp[n-1][target];
}
*/


//Space Optimization
/*
bool isSubsetSum(vector<int>& arr, int target) {
    // code here
    int n = arr.size();
    vector<bool> prev(target+1, false), curr(target+1, false);
    //return solve(n-1, target, arr, dp);
    prev[0] = true;
    curr[0] = true;
    prev[arr[0]] = true;
    for(int i=1; i<n; i++){
        for(int j=1; j<=target; j++){
            bool notPick = prev[j];
            bool pick = false;
            if(j-arr[i]>=0){
                pick = prev[j-arr[i]];
            }
            curr[j] = pick || notPick;
        }
        prev = curr;
    }
    return prev[target];
}
*/