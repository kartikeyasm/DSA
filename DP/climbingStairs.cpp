//https://leetcode.com/problems/climbing-stairs/

/* 



class Solution {
public:
    int solve(int n , vector<int> &dp){
        if(n<=1){
            return 1;
        }
        if(dp[n]!= -1){
            return dp[n];
        }
        dp[n] = solve(n-1, dp) + solve(n-2, dp);
        return dp[n];
    }
    

    int climbStairs(int n) {
        //vector<int> dp(n+1, -1);
        //return solve(n, dp); 
        
        
        
        if(n==1){
            return 1; 
        }
        int prev = 1;
        int prev2 = 1;
        int ans;
        for(int i=2; i<=n; i++){
            ans = prev + prev2;
            prev2 = prev;
            prev = ans;
        }
        return ans;


    }
};



*/