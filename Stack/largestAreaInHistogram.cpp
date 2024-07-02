#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//Q84 Largest Rectangle in Histogram 

/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
*/

/*
src=> https://leetcode.com/problems/largest-rectangle-in-histogram/description/
*/



//Brute Force O(n^2), O(1)
/*
int largestRectangleArea(vector<int>& heights) {
    Brute Force O(n^2) O(1) 
    int max=0;
    int len=heights.size();
    for(int i=0;i<len;i++){
        int h=heights[i];
        int left=i;
        int right=i;
        for(int j=i;j>=0;j--){
            if(heights[j]<h){
                left=j+1;
                break;
            }
        }
        for(int j=i;j<len;j++){
            if(heights[j]<h){
                right=j-1;
                break;
            }
        }
        if(max<((right-left+1)*h)){
            max=(right-left+1)*h;
        }
    }
    return max; 
}*/



//Optimized Approach using maps and concept of nextSmaller element O(n), O(n) 

//Reference for next smallest question
//[https://www.naukri.com/code360/problems/next-smaller-element_1112581?interviewProblemRedirection=true&search=next%20smaller&leftPanelTabValue=SUBMISSION]


vector<int> rightSmall(vector<int>& heights){
    int len=heights.size();

    stack<int> nextSmall;
    nextSmall.push(-1);
    vector<int> right(len);
    
    for(int i=len-1;i>=0;i--){
        int h=heights[i];
        while(nextSmall.top()!=-1 && heights[nextSmall.top()]>=h){
            nextSmall.pop();
        }
        right[i]=nextSmall.top();
        nextSmall.push(i);
    }
    return right;
}
vector<int> leftSmall(vector<int>& heights){
    int len=heights.size();

    stack<int> prevSmall;
    prevSmall.push(-1);
    vector<int> left(len);

    for(int i=0;i<len;i++){
        int h=heights[i];
        while(prevSmall.top()!=-1 && heights[prevSmall.top()]>=h){
            prevSmall.pop();
        }    
        left[i]=prevSmall.top();
        prevSmall.push(i);
    }
    return left;
}
int largestRectangleArea(vector<int>& heights) {
        
        int ans=INT_MIN;
        int len=heights.size();
        vector<int> prev=leftSmall(heights);
        vector<int> next=rightSmall(heights);
        for(int i=0;i<len;i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=len;
            }
            int b=next[i]-prev[i]-1;
            if(ans<(l*b)){
                ans=l*b;
            }
            
        }

        return ans;
}







int main(){


    return 0;
}