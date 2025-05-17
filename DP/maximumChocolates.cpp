//https://www.naukri.com/code360/problems/chocolate-pickup_3125885?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


//Top Down
/*
#include <bits/stdc++.h> 

int solve(int i, int j1, int j2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp, int r, int c){
    if(j1<0 || j1>=c || j2<0 || j2>=c){
        return -1e8;
    }
    if(i==r-1){
        if(j1==j2){
            return grid[i][j1];
        }
        else{
            return grid[i][j1] + grid[i][j2];
        }
    }
    if(dp[i][j1][j2]!=-1){
        return dp[i][j1][j2];
    }
    int ans = INT_MIN;
    for(int delta1=-1; delta1<=1; delta1++){
        for(int delta2=-1; delta2<=1; delta2++){
            if(j1==j2){
                ans = max(ans, grid[i][j1] + solve(i+1,j1+delta1, j2+delta2, grid, dp, r, c));
            }   
            else{
                ans = max(ans, grid[i][j1] + grid[i][j2] + solve(i+1,j1+delta1, j2+delta2, grid, dp, r, c));
            }
        }
    }
    dp[i][j1][j2] = ans;
    return dp[i][j1][j2];
}


int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    vector<vector<vector<int>>> dp(r, vector<vector<int>> (c, vector<int> (c, -1)));
    return solve(0, 0, c-1, grid, dp, r, c);
}
*/



//Tabulation
/*
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    vector<vector<vector<int>>> dp(r, vector<vector<int>> (c, vector<int> (c, -1)));
    //return solve(0, 0, c-1, grid, dp, r, c);
    for(int j1=0; j1<c; j1++){
        for(int j2=0; j2<c; j2++){
            if(j1==j2){
                dp[r-1][j1][j2] = grid[r-1][j1];
            }
            else{
                dp[r-1][j1][j2] = grid[r-1][j1] + grid[r-1][j2];
            }
        }
    }
    for(int i=r-2; i>=0; i--){
        for(int j1=0; j1<c; j1++){
            for(int j2=0; j2<c; j2++){

                int ans = INT_MIN;
                for(int delta1 = -1; delta1<=1; delta1++){
                    for(int delta2 = -1; delta2<=1; delta2++){
                        if(j1+delta1>=0 && j1+delta1<c && j2+delta2>=0 && j2+delta2<c){
                            if(j1==j2){
                                ans = max(ans, grid[i][j1]+dp[i+1][j1+delta1][j2+delta2]);
                            }
                            else{
                                ans = max(ans, grid[i][j1]+grid[i][j2] +dp[i+1][j1+delta1][j2+delta2]);
                            }
                        }
                    }

                }
                dp[i][j1][j2] = ans;

            }

        }
    }
    return dp[0][0][c-1];
}
*/