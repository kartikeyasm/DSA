#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>

using namespace std;
// T.C. => O(2^N)  SC=> O(N)    using recursion


// T.C. => O(N)  SC=> O(N+N)    using Recursion + Memoization [Top Down DP]
int fibo(int n, vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
    return dp[n];
}

           
           
           
/* 
// T.C. => O(N)  SC=> O(N)    using Iterative DP [Bottom-Up DP]

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    vector<int> dp(n+1 , -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
*/



/* 
// T.C. => O(N)  SC=> O(1)    using Optimized Iterative DP

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int prev = 1;
    int prev2 = 0;
    int ans;
    for(int i=2; i<=n; i++){
        ans = prev + prev2;
        prev2 = prev;
        prev = ans;
    }
    return ans;
}
*/

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fibo(n , dp);
    return 0;

    return 0;
}