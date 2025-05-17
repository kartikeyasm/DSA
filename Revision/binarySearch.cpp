#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>

using namespace std;

int binarySearch(int arr[], int find, int n){
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){
        mid = s+ (e-s)/2;
        if(arr[mid]==find){
            return mid;
        }
        else if(arr[mid]>find){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}

pair<int,int> firstAndLastOccurance(int arr[], int n, int k){
    pair<int,int> ans = {-1,-1};
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e){
        mid = s+ (e-s)/2;
        if(arr[mid]==k){
            ans.first=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    s=0;
    e=n-1;
    while(s<=e){
        mid = s+ (e-s)/2;
        if(arr[mid]==k){
            ans.second=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}


float sqrt(long long int x){
    long long int s=0;
    long long int e=x;
    long long int ans=-1;
    long long int mid;
    while(s<=e){
        mid = s + (e-s)/2;
        if(mid*mid>x){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    float finalAns=ans;
    float precision = 0.1;
    while(precision>0.00001){
        while((finalAns+precision)*(finalAns+precision)<x){
            finalAns+=precision;
        }
        precision/=10;
    }
    return finalAns;
}



int main(){
    int arr[] = {1,3,5,5,5,5,6,7,8,9,9};
    int n=sizeof(arr)/sizeof(int);
    pair<int,int> ans = firstAndLastOccurance(arr, n, 5);
    cout<<ans.first<<" : "<<ans.second;
    cout<<endl;
    long long int x = 99;
    cout<<"Sqrt of 99 = "<<sqrt(x)<<endl;

    return 0;
}