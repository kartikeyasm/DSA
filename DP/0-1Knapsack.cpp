//https://www.naukri.com/code360/problems/0-1-knapsack_920542?leftPanelTabValue=SUBMISSION

//Memoization and TopDown approach
/*
#include <bits/stdc++.h> 

int solve(vector<int> &weight, vector<int> &value, int index, int target, vector<vector<int>> &dp){
	if(index==0){
		if(target>=weight[0]){
			return value[0];
		}
		return 0;
	}
	if(dp[index][target]!=-1){
		return dp[index][target];
	}
	int notPick = solve(weight, value, index-1, target, dp);
	int pick = INT_MIN;
	if(target>=weight[index]){
		pick = value[index] + solve(weight, value, index-1, target-weight[index], dp);
	}
	dp[index][target] = max(pick, notPick);
	return dp[index][target];
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(maxWeight+1, -1));
	return solve(weight, value, n-1, maxWeight, dp);

}
*/



//BottomUp approach 
/*
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(maxWeight+1, 0));
	//return solve(weight, value, n-1, maxWeight, dp);
	for(int i=weight[0]; i<=maxWeight; i++){
		dp[0][i] = value[0];
	}

	for(int index=1; index<n; index++){
		for(int wt=0; wt<=maxWeight; wt++){
			int notPick = dp[index-1][wt];
			int pick = INT_MIN;
			if(weight[index]<=wt){
				pick = value[index] + dp[index-1][wt-weight[index]];
			}
			dp[index][wt] = max(pick, notPick);
		}
	}
	return dp[n-1][maxWeight];

}
*/