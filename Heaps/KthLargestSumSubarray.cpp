#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>

using namespace std;

/* Find the kth largest sum of subarray

https://www.naukri.com/code360/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

*/


//Approach 1 TC=> O(N^2logN)   SC=> O(n^2)               [Brute Force using n^2 iterations and a sum vector storing n^2 sum valuse and sort them in (N^2log(N^2)) time]
/* 
int getKthLargest(vector<int> &arr, int k){
	int len=arr.size();
	vector<int> sum;
	for(int i=0;i<len;i++){
		int currSum=0;
		for(int j=i;j<len;j++){
			currSum+=arr[j];
			sum.push_back(currSum);
		}
	}
	sort(sum.rbegin(), sum.rend());
	return sum[k-1];
}
*/


//Approach 2 TC=> O(N^2logK)  SC=> O(k)                         [Using min heap to store kth largest sum on top of it]
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	int len=arr.size();
	priority_queue<int, vector<int>, greater<int>> mini;
	for(int i=0;i<len;i++){
		int currSum=0;
		for(int j=i;j<len;j++){
			currSum+=arr[j];
			if(mini.size()<k){
				mini.push(currSum);
			}
			else{
				if(mini.top() < currSum){
					mini.pop();
					mini.push(currSum);
				}
			}
		}
	}
	return mini.top();
}






int main(){


    return 0;
}