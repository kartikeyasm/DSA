#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.

*/

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void rev(vector <int> &arr, int m=-1){
    int e=arr.size()-1;
    int s=m+1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    vector<int>arr={1,2,3,4,5};
    rev(arr);
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    rev(arr);
    rev(arr,2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    return 0;
}