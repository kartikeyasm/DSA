#include<iostream>
#include<vector>

using namespace std;

//Rotate Image (2D Array) by 90deg.
/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation. */

void transpose(vector<vector<int>>& matrix){
    int col=matrix[0].size();
    int row=matrix.size();
    int j=0;
    for(int i=0;i<col;i++){
        for(int j=i;j<row;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

void printMatrix(vector<vector<int>>& matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<'\t';
        }
        cout<<endl;
    }
}

void reverseCols(vector<vector<int>>& matrix){
    int row=matrix.size();
    for(int i=0;i<row;i++){
        int s=0;
        int e=matrix[0].size()-1;
        while(s<e){
            swap(matrix[i][s],matrix[i][e]);
            s++;
            e--;
        }
    }
}

void rotate(vector<vector<int>> &matrix){
    transpose(matrix);
    reverseCols(matrix);
}

int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"Original Matrix:-"<<endl;
    printMatrix(matrix);
    cout<<endl;
    cout<<"Rotated Matrix:-"<<endl;
    rotate(matrix);
    printMatrix(matrix);
    cout<<endl<<"OriginalMatrix:-"<<endl;
    rotate(matrix);
    rotate(matrix);
    rotate(matrix);
    printMatrix(matrix);
    return 0;
}