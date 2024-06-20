#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


//Q46. Permutations  (Page 77-79)

/*
(https://leetcode.com/problems/permutations/submissions/1294043266/)
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]


(Similar to C:\WORK\CPP\DSA\Recursion\PermutationString.cpp) (https://www.naukri.com/code360/problems/permutations-of-a-string_985254?interviewProblemRedirection=true&search=permutations&attempt_status=COMPLETED&sort_entity=recents&sort_order=DESC)
*/

void solve(vector<int>& nums, int index, vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(nums);
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[i],nums[index]);
        solve(nums, index+1, ans);
        swap(nums[i],nums[index]);
    }
}


vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    if(nums.size()==0){
        return ans;
    }
    int index=0;
    solve(nums, index, ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=permute(nums);
    for (vector<int> i:ans){
        cout<<"{";
        for(int j:i){
            cout<<j<<", ";
        }
        cout<<"},";
    }
    cout<<endl;

    return 0;
}