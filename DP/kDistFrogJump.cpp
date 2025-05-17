#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>

using namespace std;

int solve(int n, vector<int> &height ,vector<int> &dp, int k){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans = INT_MAX;
    for(int i=1; i<=k; i++){
        if(n-i>=0){
            int jump = solve(n-i, height, dp, k) - abs(height[n] - height[n - i]);
            ans = min(jump, ans);
        }
    }
    dp[n] = ans;
    return dp[n];
}


int main(){


    return 0;
}