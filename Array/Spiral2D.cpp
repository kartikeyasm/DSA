#include<iostream>
#include<vector>

using namespace std;

//Q54 Print Spiral Matrix

void printMatrix(vector<vector<int>>& matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<'\t';
        }
        cout<<endl;
    }
}


vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int n=matrix.size();
    int m=matrix[0].size();
    int count=n*m;
    int startingRow=0;
    int startingCol=0;
    int endingRow=n-1;
    int endingCol=m-1;
    while(count>0){
        for(int j=startingCol;count>0 && j<=endingCol;j++){
            ans.push_back(matrix[startingRow][j]);
            count--;
        }
        startingRow++;
        for(int i=startingRow;count>0 && i<=endingRow;i++){
            ans.push_back(matrix[i][endingCol]);
            count--;
        }
        endingCol--;
        for(int j=endingCol;count>0 && j>=startingCol;j--){
            ans.push_back(matrix[endingRow][j]);
            count--;
        }
        endingRow--;
        for(int i=endingRow;count>0 && i>=startingRow;i--){
            ans.push_back(matrix[i][startingCol]);
            count--;
        }
        startingCol++;   
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(matrix);
    vector<int>ans=spiralOrder(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<'\t';
    }
    return 0;
}