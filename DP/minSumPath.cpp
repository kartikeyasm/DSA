//https://www.naukri.com/code360/problems/minimum-path-sum_985349?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


//Top Down
/*
#include <bits/stdc++.h> 

int solve(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
    if(i==0 && j==0){
        return grid[0][0];
    }
    if(i<0 || j<0){
        return 1e9;  //Using INT_MAX would lead to int overflow either use long long int or 1e9
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int left = grid[i][j] + solve(i, j-1, grid, dp);
    int up = grid[i][j] + solve(i-1, j, grid, dp);
    dp[i][j] = min(left, up);
    return dp[i][j];
}


int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp (n , vector<int> (m, -1));
    return solve(n-1, m-1, grid, dp);
}

*/


//Tabulation
/*
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp (n , vector<int> (m, -1));
    //return solve(n-1, m-1, grid, dp);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0){
                dp[i][j] = grid[i][j];
            }
            else{
                int left = 1e9;
                int up = 1e9;
                if(j>0){
                    left = grid[i][j] + dp[i][j-1];
                }
                if(i>0){
                    up = grid[i][j] + dp[i-1][j];
                }
                dp[i][j] = min(left , up);
            }
        }
    }
    return dp[n-1][m-1];
}
*/

//Space Optimization
/*
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n = grid.size();
    int m = grid[0].size();
    vector<int> prev (n , 1e9);
    //return solve(n-1, m-1, grid, dp);
    for(int i=0; i<n; i++){
        vector<int> temp (m, 1e9);
        for(int j=0; j<m; j++){
            if(i==0 && j==0){
                temp[j] = grid[i][j];
            }
            else{
                int left = 1e9;
                int up = 1e9;
                if(j>0){
                    left = grid[i][j] + temp[j-1];
                }
                if(i>0){
                    up = grid[i][j] + prev[j];
                }
                temp[j] = min(left , up);
            }
        }
        prev = temp;
    }
    return prev[m-1];
}
*/