// DP 17 (https://takeuforward.org/plus/dsa/problems/count-subsets-with-sum-k)


//Top Down
/* class Solution{
    const int mod = 1e9 + 7;
	public:
    int solve(vector<int> &arr, int index, int sum, vector<vector<int>> &dp){
        if(index == 0){
            if(arr[0]==0 && sum==0){
                return 2;
            }
            if(sum ==0 || sum == arr[0]){
                return 1
            }
            return 0;
        }

        if(dp[index][sum]!= -1){
            return dp[index][sum];
        }
        int notPick = solve(arr, index-1, sum, dp);
        int pick = 0;
        if(sum >= arr[index]){
            pick = solve(arr, index-1, sum-arr[index], dp);
        }
        
        dp[index][sum] = (pick + notPick)%mod;
        return dp[index][sum];
    }


	int perfectSum(vector<int>&arr, int K){
        int len = arr.size();
        vector<vector<int>> dp(len, vector<int> (K+1, -1));
        return solve(arr, len-1, K, dp);
	}
}; 
*/


//Bottom Up
/* 
int perfectSum(vector<int>&arr, int K){
    int len = arr.size();
    vector<vector<int>> dp(len, vector<int> (K+1, 0));
    for(int i=0; i<len; i++){
        dp[i][0] = 1;
    }
    if(arr[0] <= K){
        dp[0][arr[0]] = 1;
    }

    for(int i=1; i<len; i++){
        for(int j=0; j<=K; j++){
            int notPick = dp[i-1][j];
            int pick = 0;
            if(j >= arr[i]){
                pick = dp[i-1][j-arr[i]];
            }

            dp[i][j] = (pick + notPick)%mod;
        }
    }
    return dp[len-1][K];
}
*/

