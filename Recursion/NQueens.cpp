
//Q51 N-Queens
//https://leetcode.com/problems/n-queens/

//isSafe() function can be optimised by using map to store if queen is present in the same diagonals and row or not 
//(https://youtu.be/9wEwqNdOAVQ?si=1uf1zdrwyHjAX5sg) [Time Stamp : 22:15]

//Stil time complexity remains same as overall complexity is of higher order
// TC=> O(n!)
// SC=> O(n*n)


/* 

class Solution {
public:
    bool isSafe(vector<string> &ans, int row, int col, int n){
        for(int i=0; i<row; i++){
            if(ans[i][col]=='Q'){
                return false;
            }
        }
        int i=row;
        int j=col;
        while(i>=0 && j>=0){
            if(ans[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i = row;
        j = col;
        while(i>=0 && j<n){
            if(ans[i][j]=='Q'){
                return false;
            }
            i--;
            j++;
        }
        return true;
    }

    void solve(int n, int index, vector<vector<string>> &solution, vector<string> ans){
        if(index>=n){
            solution.push_back(ans);
            return;
        }
        for(int i=0; i<n; i++){
            if(isSafe(ans, index, i, n)){
                ans[index][i] = 'Q';
                solve(n, index+1, solution, ans);
                ans[index][i] = '.';
            }
            
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solution;
        vector<string> ans;
        string temp = "";
        for(int i=0; i<n; i++){
            temp.push_back('.');
        }
        for(int i=0; i<n; i++){
            ans.push_back(temp);
        }
        
        solve(n, 0, solution, ans);
        return solution;
    }
};



*/