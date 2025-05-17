//https://leetcode.com/problems/longest-common-subsequence/

//Simila to unbounded knapsack problem

//Top Down Approach
/*
int solve(int index1, int index2, string text1, string text2, vector<vector<int>> &dp){
    if(index1<0 || index2<0){
        return 0;
    }
    if(dp[index1][index2]!= -1){
        return dp[index1][index2];
    }

    if(text1[index1] == text2[index2]){
        dp[index1][index2] = 1 + solve(index1-1, index2-1, text1, text2, dp);
    } 
    else{
        dp[index1][index2] = max(solve(index1, index2-1, text1, text2, dp), solve(index1-1, index2, text1, text2, dp));
    }
    return dp[index1][index2];
}
*/


//Bottom Up Approach
//To handle negative index base case we can add 1 extra row and column in the dp array so that 0 represents the negative index case and shigiting each index by 1
/*
int longestCommonSubsequence(string text1, string text2) {
    int n = text1.size();
    int m = text2.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
    //return solve(n-1, m-1, text1, text2, dp);
    for(int index1=1; index1<=n; index1++){
        for(int index2=1; index2<=m; index2++){
            if(text1[index1-1] == text2[index2-1]){
                dp[index1][index2] = 1 + dp[index1-1][index2-1];
            } 
            else{
                dp[index1][index2] = max(dp[index1][index2-1], dp[index1-1][index2]);
            }
        }
    }
    return dp[n][m];
}
*/