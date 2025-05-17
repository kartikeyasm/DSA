//https://leetcode.com/problems/island-perimeter/


/* 
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans=0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){
                    //Top
                    if(i==0 || grid[i-1][j]==0){
                        ans++;
                    }
                    //Bottom
                    if(i>=rows-1 || grid[i+1][j]==0){
                        ans++;
                    }
                    //Left
                    if(j==0 || grid[i][j-1]==0){
                        ans++;
                    }
                    //Right
                    if(j>=cols-1 || grid[i][j+1]==0){
                        ans++;
                    }
                }   
            }
        }
        return ans;
    }
    
};
*/


/*     
class Solution {
public:
    bool isWater(vector<vector<int>> &grid, int &i, int &j, int &rows, int &cols){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]==0){
            return true;
        }
        return false;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int starti = -1;
        int startj = -1;
        vector<vector<bool>> visited(rows, vector<bool> (cols, false));
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){
                    starti = i;
                    startj = j;
                    break;
                }
            }
            if(starti!=-1){
                break;
            }
        }
        vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
        queue<pair<int,int>> q;
        q.push({starti, startj});
        visited[starti][startj] = true;
        while(!q.empty()){
            pair<int,int> temp = q.front();
            q.pop();
            for(auto direction: directions){
                int newi = temp.first + direction.first;
                int newj = temp.second + direction.second;
                if(isWater(grid, newi, newj, rows , cols)){
                    ans++;
                }
                else if(!visited[newi][newj]){
                    q.push({newi, newj});
                    visited[newi][newj] = true;
                }
            }
        }
        return ans;
    } 
*/