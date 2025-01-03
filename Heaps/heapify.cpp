#include<iostream>
#include<vector>

using namespace std;

//TC=> O(logN)
void heapify(int arr[], int n, int i){
    while(i<=n/2){
        int largest=i;
        int left = i*2;
        int right = i*2 + 1;
        if(left<=n && arr[largest]< arr[left]){
            largest=left;
        }
        if(right<=n && arr[largest]<arr[right]){
            largest=right;
        }

        if(largest!=i){
            swap(arr[i], arr[largest]);
            i=largest;
        }
        else{
            break;
        }
    }
}

int main(){
    int arr[6]= {-1,1,2,3,4,5};
    int n=5;

    //Building max heap using heapify =>  TC=> O(N)    *******************
    for(int i=n/2;i>=1;i--){
        heapify(arr, n, i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;

    return 0;
}