//https://www.geeksforgeeks.org/problems/geek-jump/0

/* Top Down Approach

class Solution {
    public:
      int solve(int i,vector<int> &height, vector<int> &dp){
          if(i==0){
              return 0;
          }
          if(i==1){
              dp[1] = abs(height[1] - height[0]);
              return dp[1];
          }
          if(dp[i]!=-1){
              return dp[i];
          }
          int left = solve(i-1, height, dp) + abs(height[i-1] - height[i]);
          int right = solve(i-2, height, dp) + abs(height[i-2] - height[i]);
          dp[i] = min(left, right);
          return dp[i];
      }
    
    
      int minCost(vector<int>& height) {
          // Code here
          int ans;
          int n = height.size();
          vector<int> dp(n+1, -1);
          return solve(n-1, height, dp);
      }
}; 
*/



//Iteratively Optimized Answer
/*
int minCost(vector<int>& height) {
    int n = height.size();
    if(n==1){
        return 0;
    }
    if(n==2){
        return abs(height[1] - height[0]);
    }
    int prev = abs(height[1] - height[0]);
    int prev2 = 0;
    int ans;
    for(int i=2; i<n; i++){
        int left = prev + abs(height[i-1] - height[i]);
        int right = prev2 + abs(height[i-2] - height[i]);
        ans = min (left, right);
        prev2 = prev;
        prev = ans;
    }
    return ans;
}
*/