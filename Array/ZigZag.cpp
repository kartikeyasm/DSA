#include<iostream>
#include<vector>

using namespace std;

void zigZag(int n, vector<int> &arr) {
    // code here
    int btn=0;
    for(int i=0;i<n-1;i++){
        if(btn==0 && (arr[i]>arr[i+1])){
            swap(arr[i],arr[i+1]);
            btn=1;
        }
        else if(btn==1 && (arr[i]<arr[i+1])){
            swap(arr[i],arr[i+1]);
            btn=0;
        }
        else{
            btn=!btn;
        }
    }
}

int main(){
    vector<int> arr={4, 3, 7, 8, 6, 2, 1};
    zigZag(7, arr);
    for(int j=0;j<7;j++){
        cout<<arr[j]<<", ";
    }
    cout<<endl;
}