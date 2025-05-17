//https://leetcode.com/problems/max-area-of-island/

/* 


class Solution {
public:
    bool isSafe(vector<vector<int>> &grid, int &i, int &j, int &rows, int &cols){
        if(i<0 || i>= rows || j<0 || j>=cols || grid[i][j]==0){
            return false;
        }
        return true;
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows= grid.size();
        int cols= grid[0].size();
        int ans=0;
        vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
        //vector<vector<bool>> visited(rows, vector<bool> (cols,false));
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){
                    int area=1;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j] = 0;
                    while(!q.empty()){
                        pair<int,int> temp = q.front();
                        q.pop();
                        for(auto direction: directions){
                            int newi = temp.first + direction.first;
                            int newj = temp.second + direction.second;
                            if(isSafe(grid, newi, newj, rows, cols)){
                                q.push({newi, newj});
                                grid[newi][newj] = 0;
                                area++;
                            }
                        }
                    }
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
}; 
*/