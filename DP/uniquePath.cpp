//https://www.naukri.com/code360/problems/unique-paths_1081470?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
//https://leetcode.com/problems/unique-paths/submissions/1540626081/

//Top Down
/*
int solve(int m, int n, vector<vector<int>> &dp){
	if(m==0 && n==0){
		return 1;
	}
	if(m<0 || n<0){
		return 0;
	}
	if(dp[m][n] != -1){
		return dp[m][n];
	}

	int left = solve(m, n-1, dp);
	int up = solve(m-1, n, dp);
	dp[m][n] = left+up;
	return dp[m][n];
}

int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m, vector<int> (n, -1));
	return solve(m-1, n-1, dp);
}
*/


//Tabulation
/*
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m, vector<int> (n, -1));
	//return solve(m-1, n-1, dp);
	dp[0][0]=1;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i==0 && j==0){
				continue;
			}
			else{
				int left=0;
				int up=0;
				if(j>0){
					left = dp[i][j-1];
				}
				if(i>0){
					up = dp[i-1][j];
				}
				dp[i][j] = left + up;
			}
		}
	}
	return dp[m-1][n-1];
}
*/


//Space Optimization
/*
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int> prev(n, 0);
	//return solve(m-1, n-1, dp);
	for(int i=0; i<m; i++){
		vector<int> temp(n,0);
		for(int j=0; j<n; j++){
			if(i==0 && j==0){
				temp[0] = 1;
			}
			else{
				int left=0;
				int up=0;
				if(j>0){
					left = temp[j-1];
				}
				if(i>0){
					up = prev[j];
				}
				temp[j] = left + up;
			}
		}
		prev = temp;
	}
	return prev[n-1];
}
*/