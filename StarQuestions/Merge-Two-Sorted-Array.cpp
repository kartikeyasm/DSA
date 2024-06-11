#include<iostream>
#include<vector>

using namespace std;
/*
//Merge two sorted array by using a third array and copying data into that


void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>=arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i>=n){
        while(j<m){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    else if(j>=n){
        while(i<n){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }
}


int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int arr3[10];
    merge(arr1,5,arr2,5,arr3);
    for (int i=0;i<10;i++){
        cout<<arr3[i]<<",";
    }
}

*/

/*Q88 Merge Two Sorted Array (https://leetcode.com/problems/merge-sorted-array/description/)
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1;
    int j=m+n-1;
    int k=n-1;
    while(k>=0){
        if(i>=0 && nums2[k]<nums1[i]){
            nums1[j]=nums1[i];
            i--;
            j--;
        }
        else{
            nums1[j]=nums2[k];
            j--;
            k--;
        }
    }
}


int main(){
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    int n=nums2.size();
    int m=nums1.size()-n;
    merge(nums1,m,nums2,n);
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<", ";
    }
    cout<<endl;
}