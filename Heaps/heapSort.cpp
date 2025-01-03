#include<iostream>
#include<vector>

using namespace std;

// Heapify Function TC=> O(logN)
void heapify(int arr[], int i, int n){
    while(i<=n/2){
        int left=i*2;
        int right=i*2+1;
        int largest=i;
        if(left<=n && arr[largest]<arr[left]){
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
            return;
        }
    }
}   


// TC => O(NlogN)                    Build Heap + Heap Sort    [N + NlogN]
void heapSort(int arr[], int n){
    int size=n;
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr, 1, size);    
    }


}

int main(){
    int arr[6] = {-1, 54,53,55,52,50};
    int n=5;

    for(int i:arr){
        cout<<i<<" , ";
    }
    cout<<endl;
    
    for(int i=n/2;i>0;i--){
        heapify(arr, i, n);
    }
    
    for(int i:arr){
        cout<<i<<" , ";
    }
    cout<<endl;


    heapSort(arr, n);
    for(int i:arr){
        cout<<i<<" , ";
    }
    cout<<endl;
    return 0;
}