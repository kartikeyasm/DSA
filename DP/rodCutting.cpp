//https://www.naukri.com/code360/problems/rod-cutting-problem_800284?leftPanelTabValue=SUBMISSION

//Top Down Approach
/*
#include<bits/stdc++.h>

int solve(int index, int sizeLeft, vector<int> &price, vector<vector<int>> &dp){
	if(index==0){
		return sizeLeft * price[0];
	}
	if(dp[index][sizeLeft] != -1){
		return dp[index][sizeLeft];
	}
	int notPick = solve(index-1, sizeLeft, price, dp);
	int pick = 0;
	if(index+1 <= sizeLeft){
		pick = price[index] + solve(index, sizeLeft-(index+1), price, dp);
	}
	dp[index][sizeLeft] = max(pick, notPick);
	return dp[index][sizeLeft];
}

int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>> dp(n, vector<int> (n+1, -1));
	return solve(n-1, n, price, dp);
}

*/


//Bottom Up Approach
/*
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>> dp(n, vector<int> (n+1, -1));
	//return solve(n-1, n, price, dp);
	for(int size = 0; size<=n; size++){
		dp[0][size] = size*price[0];
	}
	for(int index = 1; index<n; index++){
		for(int sizeLeft = 0; sizeLeft<=n; sizeLeft++){
			int notPick = dp[index-1][sizeLeft];
			int pick = 0;
			if(index+1 <= sizeLeft){
				pick = price[index] + dp[index][sizeLeft-(index+1)];
			}
			dp[index][sizeLeft] = max(pick, notPick);
		}
	}
	return dp[n-1][n];
}
*/