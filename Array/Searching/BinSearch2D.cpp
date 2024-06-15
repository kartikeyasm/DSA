#include<iostream>
#include<vector>

using namespace std;

//Q74 Search 2D sorted array
/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    int cols=matrix[0].size();
    int s=0;
    int e=rows*cols-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int element=matrix[mid/cols][mid%cols];
        if(element==target){
            return 1;
        }
        else if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
            
    }
    return false;
        
}

int main(){
    int target=4;
    vector<vector<int>> arr={{1,2,3,4},{10,12,14,15},{16,17,18,19}};
    cout<<searchMatrix(arr,target);
    return 0;
}