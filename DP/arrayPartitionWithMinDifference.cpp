//https://www.naukri.com/code360/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?leftPanelTabValue=PROBLEM

/*

bool solve(vector<int> &arr, vector<vector<int>> &dp, int index, int sum){
	if(index<0){
		return false;
	}
	if(index==0){
		return arr[0]==sum;
	}
	if(sum==0){
		return true;
	}
	if(sum<0){
		return false;
	}
	if(dp[index][sum]!= -1){
		return dp[index][sum];
	}

	bool pick = solve(arr, dp, index-1, sum-arr[index]);
	bool notPick = solve(arr, dp, index-1, sum);

	dp[index][sum] = pick || notPick;
	return dp[index][sum];
}


int minSubsetSumDifference(vector<int>& arr, int n){
	// Write your code here.
	int sum = 0;
	for(int i: arr){
		sum+=i;
	}
	vector<vector<bool>> dp(n , vector<bool> (sum+1, false));
	for(int i=0; i<n; i++){
		dp[i][0] = true;
	}
	dp[0][arr[0]] = true;

	for(int i=1; i<n; i++){
		for(int j=1; j<sum+1; j++){
			bool notPick = dp[i-1][j];
			bool pick = false;
			if(j - arr[i]>=0){
				pick = dp[i-1][j-arr[i]];
			}
			dp[i][j] = pick || notPick;
		}
	}

	int ans = 1e9;
	for(int i=0; i<=sum; i++){
		if(dp[n-1][i]== 1){
			ans = min(ans, abs(sum-i-i));
		}
	}


	return ans;

}



*/