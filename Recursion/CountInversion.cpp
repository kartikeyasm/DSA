#include<iostream>
#include<vector>

using namespace std;

/*For a given integer array/list 'ARR' of size 'N' containing all distinct values, find the total number of 'Inversions' that may exist.

An inversion is defined for a pair of integers in the array/list when the following two conditions are met.

Sample Input 1 :
3
3 2 1
Sample Output 1 :
3
Explanation of Sample Output 1:
We have a total of 3 pairs which satisfy the condition of inversion. (3, 2), (2, 1) and (3, 1).

*/


//Approach 1 =>Comparing each element with all its right elements 
int countInversion(int arr[],int n){
    if(n<=1){
        return 0;
    }
    int ans=0;
    for(int i=1;i<n;i++){
        if(arr[0]>arr[i]){
            cout<<"("<<arr[0]<<" , "<<arr[i]<<"), ";
            ans++;
        }
    }
    return ans+countInversion(arr+1,n-1);
}


int main(){
    int arr[]={1, 20, 6, 4, 5};
    cout<<countInversion(arr,5)<<endl;

    return 0;
}