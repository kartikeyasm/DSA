//https://leetcode.com/problems/triangle/description/


//Top Down
/*
#include <bits/stdc++.h> 

int solve(int i, int j, vector<vector<int>> &triangle, vector<vector<int>> &dp, int n){
	if(i==n-1){
		return triangle[i][j];
	}
	if(i>=n || j>=n || j>i){
		return 1e9;
	}
	if(dp[i][j]!= -1){
		return dp[i][j];
	}
	int right = triangle[i][j] + solve(i+1, j+1, triangle, dp, n);
	int down = triangle[i][j] + solve(i+1, j, triangle, dp, n);
	dp[i][j] = min(right, down);
	return dp[i][j];
}


int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<vector<int>> dp(n, vector<int> (n, -1));
	return solve(0, 0, triangle, dp, n); 
}
*/



//Tabulation
/*
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<vector<int>> dp(n, vector<int> (n, -1));
	//return solve(0, 0, triangle, dp, n); 
	for(int i=0; i<n; i++){
		dp[n-1][i] = triangle[n-1][i];
	}
	
	for(int i=n-2; i>=0; i--){
		for(int j=i; j>=0; j--){
			int right = triangle[i][j] + dp[i+1][j+1];
			int down = triangle[i][j] + dp[i+1][j];
			
			dp[i][j] = min(down, right);
		}
	}
	return dp[0][0];
}
*/


//Space Optimization
/*
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<int> prev(n, -1);
	//return solve(0, 0, triangle, dp, n); 
	for(int i=0; i<n; i++){
		prev[i] = triangle[n-1][i];
	}
	
	for(int i=n-2; i>=0; i--){
		vector<int> temp(n,-1);
		for(int j=i; j>=0; j--){
			int right = triangle[i][j] + prev[j+1];
			int down = triangle[i][j] + prev[j];
			temp[j] = min(down, right);
		}
		prev = temp;
	}
	return prev[0];
}
*/