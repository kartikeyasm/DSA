//https://leetcode.com/problems/coin-change-ii/

//Memoization Top Down Approach
/*
class Solution {
public:
    int solve(int index, int amount, vector<int> &coins, vector<vector<int>> &dp){
        if(index==0){
            if(amount%coins[0]==0){
                return 1;
            }
            return 0;
        }
        if(dp[index][amount]!=-1){
            return dp[index][amount];
        }
        int notPick = solve(index-1, amount, coins, dp);
        int pick = 0;
        if(coins[index] <= amount){
            pick = solve(index, amount-coins[index], coins, dp);
        }
        dp[index][amount] = pick + notPick;
        return dp[index][amount];
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (amount+1, -1));
        return solve(n-1, amount, coins, dp);
    }
};
*/


//Bottom Up Approach
/*
int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (amount+1, 0));
        //return solve(n-1, amount, coins, dp);
        for(int i=0; i<=amount; i++){
            if(i%coins[0]==0){
                dp[0][i] = 1;
            }
        }

        for(int index = 1; index<n; index++){
            for(int amnt = 0; amnt<=amount; amnt++){
                int notPick = dp[index-1][amnt];
                int pick = 0;
                if(coins[index] <= amnt){
                    pick = dp[index][amnt-coins[index]];
                }
                dp[index][amnt] = pick + notPick;
            }
        }
        return dp[n-1][amount];

    }
*/