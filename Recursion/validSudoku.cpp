#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//https://leetcode.com/problems/sudoku-solver/




bool isValidSudoku(vector<vector<char>> &board, int row, int col, char val){
    for(int i=0;i<9;i++){
        if(board[i][col]==val){
            return false;
        }

        if(board[row][i]==val){
            return false;
        }

        if(board[3*(row/3) + i/3] [3*(col/3) + i%3] == val){
            return false;
        }

    }
    return true;
}

void solve(vector<vector<char>> &board, int nLeft, bool &isSolved){
    if(nLeft==0 || isSolved){
        isSolved = true;
        return;
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]=='.'){
                for(char c='1'; c<='9'; c++){
                    if(isValidSudoku(board, i, j, c)){
                        board[i][j] = c;
                        solve(board, nLeft-1, isSolved);
                        if(isSolved){
                            return;
                        }
                        board[i][j] = '.';
                    }
                }
                return;                                             //Most important Return (it will backtrack if none of the possible values worked for the given cell)
            }
        }
    }
}

void solveSudoku(vector<vector<char>>& board) {
    int nLeft = 0;
    for(int i=0;i<9;i++){
        for(int j=0; j<9;j++){
            if(board[i][j]=='.'){
                nLeft++;
            }
        }
    }
    bool isSolved = false;
    solve(board, nLeft, isSolved);
}

int main(){
    vector<vector<char>> board = {
                                    {'5','3','.','.','7','.','.','.','.'},
                                    {'6','.','.','1','9','5','.','.','.'},
                                    {'.','9','8','.','.','.','.','6','.'},
                                    {'8','.','.','.','6','.','.','.','3'},
                                    {'4','.','.','8','.','3','.','.','1'},
                                    {'7','.','.','.','2','.','.','.','6'},
                                    {'.','6','.','.','.','.','2','8','.'},
                                    {'.','.','.','4','1','9','.','.','5'},
                                    {'.','.','.','.','8','.','.','7','9'}
                                };

    solveSudoku(board);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
