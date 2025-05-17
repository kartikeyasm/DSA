//https://leetcode.com/problems/target-sum/

/*
class Solution {
public:
    int solve(int index, int target, vector<int> &nums, vector<vector<int>> &dp){
        if(index==0){
            if(nums[0] == 0 && target==0){
                return 2;
            }
            if(nums[0] == target || target==0 ){
                return 1;
            }
            return 0;
        }
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        int notPick = solve(index-1, target, nums, dp);
        int pick = 0;
        if(target >= nums[index]){
            pick = solve(index-1, target-nums[index], nums, dp);
        }
        dp[index][target] = pick + notPick ; 
        return dp[index][target];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i:nums){
            sum+= i;
        }
        if((target+sum)%2!=0 || sum+target<0){
            return 0;
        }
        vector<vector<int>> dp(n, vector<int>((target+sum)/2+1, -1));
        return solve(n-1, (target+sum)/2, nums, dp);
    }
};
*/