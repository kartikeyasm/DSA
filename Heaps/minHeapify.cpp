#include<iostream>
#include<vector>

using namespace std;


void heapify(vector<int> &arr, int n,int i){
    while(i<=n/2-1){
        int smallest=i;
        int left=i*2+1;
        int right=i*2+2;
        if(left<n && arr[smallest] > arr[left]){
            smallest=left;
        }
        if(right<n && arr[smallest] > arr[right]){
            smallest=right;
        }

        if(smallest!=i){
            swap(arr[i], arr[smallest]);
            i=smallest;
        }
        else{
            return;
        }
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{

    int n=arr.size();
    for(int i=n/2-1; i>=0;i--){
        heapify(arr, n, i);
    }
    return arr;
}




int main(){


    return 0;
}