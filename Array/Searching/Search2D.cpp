#include<iostream>
#include<vector>

using namespace std;
//Q240 
/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.*/



/*Brute Force O(nlogm)*/    
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int cols=matrix[0].size();
    
    for(int i=0;i<rows;i++){
        if(matrix[i][0]==target){
            return true;
        }
        else if(matrix[i][0]<target){
            int s=0;
            int e=cols-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                int element=matrix[i][mid];
                if(element==target){
                    return true;
                }
                else if(element<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
    }
    return false; 
}

/*Optimal Solution O(n+m)   Explaination at page 48*/
bool searchMatrixOptimal(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int cols=matrix[0].size();
    int rowIndex=0;
    int colIndex=cols-1;
    while(rowIndex<rows && colIndex>=0){
        int element=matrix[rowIndex][colIndex];
        if(element==target){
            return 1;
        }
        else if(element<target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}


int main(){
    vector<vector<int>>matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target;
    cin>>target;
    cout<<searchMatrix(matrix,target)<<endl;
    cout<<searchMatrixOptimal(matrix,target);
}