//https://www.naukri.com/code360/problems/longest-common-substring_1235207?leftPanelTabValue=SUBMISSION


// Recursive DP with memoization for Longest Common Substring [not optimal solution as it has O(n^3) time complexity]
/*
int solve(const string &s1, const string &s2, int i, int j, int count, vector<vector<vector<int>>> &dp) {
    if (i == 0 || j == 0)
        return count;
    if (dp[i][j][count] != -1)
        return dp[i][j][count];

    int res = count;
    if (s1[i-1] == s2[j-1]) {
        res = solve(s1, s2, i-1, j-1, count+1, dp);
    }
    res = max(res, max(
        solve(s1, s2, i-1, j, 0, dp),
        solve(s1, s2, i, j-1, 0, dp)
    ));
    return dp[i][j][count] = res;
}

int longestCommonSubstring(const string &s1, const string &s2) {
    int n = s1.size(), m = s2.size();
    // dp[i][j][count]: max length ending at s1[i-1], s2[j-1] with current count
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(min(n, m)+1, -1)));
    return solve(s1, s2, n, m, 0, dp);
}
*/


// Bottom Up DP for Longest Common Substring (O(n*m) time complexity and O(n*m) space complexity)  
// Intution from longest common subsequence problem's tabulation technique
// This is the optimal solution for the problem
/*
int lcs(string &text1, string &text2){
    // Write your code here.
    int n = text1.size();
    int m = text2.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
	//return solve(n-1, m-1, text1, text2, dp);
	int ans = 0;
    for(int index1=1; index1<=n; index1++){
		for(int index2=1; index2<=m; index2++){
			if(text1[index1-1] == text2[index2-1]){
				dp[index1][index2] = 1 + dp[index1-1][index2-1];
                ans = max(ans, dp[index1][index2]);
			} 
			else{
				dp[index1][index2] = 0;
			}
		}
	}
    return ans;
}
*/