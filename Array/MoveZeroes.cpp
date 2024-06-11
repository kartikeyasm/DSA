#include <iostream>
#include <vector>

using namespace std;

void MoveZeroes(vector<int> &nums){
    int n=nums.size();
    int i=0;
    int j=0;
    while (j < n){
        if (nums[j]){
            nums[i] = nums[j];
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    while (i < n){
        nums[i] = 0;
        i++;
    }
}


int main(){
    vector<int> nums={0,1,0,3,12};
    MoveZeroes(nums);
}