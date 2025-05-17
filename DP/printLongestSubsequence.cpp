//https://www.naukri.com/code360/problems/print-longest-common-subsequence_8416383?leftPanelTabValue=SUBMISSION

//Continuation of longest common subsequence problem 
//(we use DP array to find the length of the longest common subsequence and then using it we construct the longest common subsequence string)

/* 
string findLCS(int n, int m,string &text1, string &text2){
	// Write your code here.	
	vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
	//return solve(n-1, m-1, text1, text2, dp);
	for(int index1=1; index1<=n; index1++){
		for(int index2=1; index2<=m; index2++){
			if(text1[index1-1] == text2[index2-1]){
				dp[index1][index2] = 1 + dp[index1-1][index2-1];
			} 
			else{
				dp[index1][index2] = max(dp[index1][index2-1], dp[index1-1][index2]);
			}
		}
	}
	string ans = "";
	int i=n, j=m;
	while(i>0 && j>0){
		if(text1[i-1] == text2[j-1]){
			ans += text1[i-1];
			i--;
			j--;
		}
		else if(dp[i-1][j]>dp[i][j-1]){
			i--;
		}
		else{
			j--;
		}
	}
	reverse(ans.begin(), ans.end());
	return ans;

} 
*/