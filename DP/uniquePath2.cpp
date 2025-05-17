//https://www.naukri.com/code360/problems/unique-paths-ii_977241?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
//https://leetcode.com/problems/unique-paths-ii/submissions/1540633015/

//Top Down
/*
#include <bits/stdc++.h> 

int mod = (int)(1e9+7);

int solve(int n, int m, vector<vector<int>> &mat, vector<vector<int>> &dp){
    if(n==0 && m==0){
        return 1;
    }
    if(n<0 || m<0 || mat[n][m]==-1){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    int left = solve(n, m-1, mat, dp);
    int up = solve(n-1, m, mat, dp);
    dp[n][m] = (left+up)%mod;
    return dp[n][m];
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    if(mat[0][0]==-1){
        return 0;
    }
    if(mat[n-1][m-1]==-1){
        return 0;
    }
    vector<vector<int>> dp (n, vector<int> (m, -1));
    return solve(n-1, m-1, mat, dp);
}
*/


//Tabulation
/*
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    if(mat[0][0]==-1){
        return 0;
    }
    if(mat[n-1][m-1]==-1){
        return 0;
    }
    vector<vector<int>> dp (n, vector<int> (m, -1));
    //return solve(n-1, m-1, mat, dp);
    dp[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0){
                continue;
            }
            if(mat[i][j]==-1){
                dp[i][j] = 0;
            }
            else{
                int left = 0;
                int up = 0;
                if(j>0){
                    left = dp[i][j-1];
                }
                if(i>0){
                    up = dp[i-1][j];
                }
                dp[i][j] = (left + up)%mod;
            }
        }
    }
    return dp[n-1][m-1];
}
*/

//Space Optimization
/*
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    if(mat[0][0]==-1){
        return 0;
    }
    if(mat[n-1][m-1]==-1){
        return 0;
    }
    vector<int> prev (m, 0);
    //return solve(n-1, m-1, mat, dp);
    for(int i=0; i<n; i++){
        vector<int> temp(m, 0);
        for(int j=0; j<m; j++){
            if(i==0 && j==0){
                temp[0] = 1;
            }
            else if(mat[i][j]==-1){
                temp[j] = 0;
            }
            else{
                int left = 0;
                int up = 0;
                if(j>0){
                    left = temp[j-1];
                }
                if(i>0){
                    up = prev[j];
                }
                temp[j] = (left + up)%mod;
            }
        }
        prev = temp;
    }
    return prev[m-1];
}
*/