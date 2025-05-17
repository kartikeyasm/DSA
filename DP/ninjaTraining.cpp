//https://www.naukri.com/code360/problems/ninja-s-training_3621003

//Top Down
/*
#include <bits/stdc++.h> 

int solve(vector<vector<int>> &points, int index, vector<vector<int>> &dp, int last){
    if(index<0){
        return 0;
    }
    if(index == 0){
        int ans = INT_MIN;
        for(int i=0; i<3; i++){
            if(i!=last){
                ans = max(ans, points[index][i]);
            }
        }
        return ans;
    }
    if(dp[index][last] != -1){
        return dp[index][last];
    }
    int ans = INT_MIN;
    for(int i=0; i<3; i++){
        if(i!=last){
            int temp = points[index][i] + solve(points, index-1, dp, i);
            ans = max(ans , temp);
        }
    }
    dp[index][last] = ans;
    return dp[index][last];
}


int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int> (4, -1));
    return solve(points, n-1, dp, 3);
}

*/



//Tabulation
/*
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int> (4, -1));
    //return solve(points, n-1, dp, 3);

    dp[0][0] = max(points[0][1] , points[0][2]);
    dp[0][1] = max(points[0][0] , points[0][2]);
    dp[0][2] = max(points[0][0] , points[0][1]);
    dp[0][3] = max(max(points[0][0] , points[0][1]) , points[0][2]);
    for(int day=1; day<n; day++){
        for(int last = 0; last<4; last++){
            dp[day][last]= INT_MIN;
            for(int task=0; task<3; task++){
                if(task!= last){
                    int temp = points[day][task] + dp[day-1][task];
                    dp[day][last] = max(dp[day][last], temp);
                }
            }
        }
    }
    return dp[n-1][3];
}
*/


//Space Optimization
/*
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(2, vector<int> (4, -1));
    //return solve(points, n-1, dp, 3);

    dp[0][0] = max(points[0][1] , points[0][2]);
    dp[0][1] = max(points[0][0] , points[0][2]);
    dp[0][2] = max(points[0][0] , points[0][1]);
    dp[0][3] = max(max(points[0][0] , points[0][1]) , points[0][2]);
    for(int day=1; day<n; day++){
        for(int last = 0; last<4; last++){
            dp[1][last]= INT_MIN;
            for(int task=0; task<3; task++){
                if(task!= last){
                    int temp = points[day][task] + dp[0][task];
                    dp[1][last] = max(dp[1][last], temp);
                }
            }
        }
        for(int i=0; i<4; i++){
            dp[0][i] = dp[1][i]; 
        }

    }
    return dp[1][3];
}
*/