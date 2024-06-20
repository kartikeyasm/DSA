#include<iostream>
#include<vector>

using namespace std;

//Q78
/*
Given an integer array nums of unique elements, return all possible 
subsets(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/


/*Works on the principle of inclusion and exclusion (for explanation reffer to page no. 72 amd 73)  */

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    //Exclude
    solve(nums,output,index+1,ans);
    //Include
    output.push_back(nums[index]);
    solve(nums,output,index+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums, output, 0, ans);
    return ans;
}


int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans=subsets(arr);
    for(int i=0;i<ans.size();i++){
        cout<<"{";
        for(int j=0;j<ans[i].size();j++){
            if(j==ans[i].size()-1){
                cout<<ans[i][j];
            }
            else{
                cout<<ans[i][j]<<", ";
            }
        }
        if(i==ans.size()-1){
            cout<<"} ";
        }
        else{
            cout<<"}, ";
        }
    }
    cout<<endl;

    return 0;
}