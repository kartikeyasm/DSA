//https://www.naukri.com/code360/problems/maximum-path-sum-in-the-matrix

//Top Down
/*
#include <bits/stdc++.h> 
int solve(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp, int &m){
    if(j<0 || j>=m){
        return -1e8;
    }
    if(i==0){
        return matrix[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int top = matrix[i][j] + solve(i-1, j, matrix, dp, m);
    int topLeft = matrix[i][j] + solve(i-1, j-1, matrix, dp, m);
    int topRight = matrix[i][j] + solve(i-1, j+1, matrix, dp, m);
    dp[i][j] = max(top, max(topLeft, topRight));
    return dp[i][j];

}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp (n, vector<int> (m, -1));
    int ans = INT_MIN;
    for(int i=0; i<m; i++){
        ans = max(ans , solve(n-1, i, matrix, dp, m));
    }
    return ans;
}
*/


//Tabulation
/*
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp (n, vector<int> (m, -1));
    for(int i=0; i<m; i++){
        dp[0][i] = matrix[0][i];
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            int top = matrix[i][j] + dp[i-1][j];
            int topLeft = INT_MIN;
            int topRight = INT_MIN;
            if(j>0){
                topLeft = matrix[i][j] + dp[i-1][j-1];
            }
            if(j<m-1){
                topRight = matrix[i][j] + dp[i-1][j+1];
            }
            dp[i][j] = max(top, max(topLeft, topRight));
        }
    }

    int ans = INT_MIN;
    for(int i=0; i<m; i++){
        ans = max(ans , dp[n-1][i]);
    }
    return ans;
}
*/

//Space Optimization
/*
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> prev (m, -1);
    for(int i=0; i<m; i++){
        prev[i] = matrix[0][i];
    }

    for(int i=1; i<n; i++){
        vector<int> temp(m, -1);
        for(int j=0; j<m; j++){
            int top = matrix[i][j] + prev[j];
            int topLeft = INT_MIN;
            int topRight = INT_MIN;
            if(j>0){
                topLeft = matrix[i][j] + prev[j-1];
            }
            if(j<m-1){
                topRight = matrix[i][j] + prev[j+1];
            }
            temp[j] = max(top, max(topLeft, topRight));
        }
        prev = temp;
    }

    int ans = INT_MIN;
    for(int i=0; i<m; i++){
        ans = max(ans , prev[i]);
    }
    return ans;
}
*/