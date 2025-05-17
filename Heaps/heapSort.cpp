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

/*

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Heap {
        vector<int> arr;
        int len;
    public:
        Heap(){
            arr.push_back(INT_MAX);
            len = 0;
        }
        int size(){
            return len-1;
        }
        void push(int element){
            arr.push_back(element);
            len++;
            int i = len;
            while(i>1){
                int parentIndex = i/2;
                if(arr[i]> arr[parentIndex]){
                    swap(arr[i], arr[parentIndex]);
                    i = parentIndex;
                }
                else{
                    break;
                }
            }
        }
        int pop(){
            int ans = arr[1];
            swap(arr[1], arr[len]);
            arr.pop_back();
            len--;
            int i = 1;
            while(i<=len){
                int leftChild = i*2;
                int rightChild = i*2 + 1;
                int largest = i;
                if(leftChild <= len && arr[largest]<arr[leftChild]){
                    largest = leftChild;
                }
                if(rightChild <= len && arr[largest]<arr[rightChild]){
                    largest = rightChild;
                    
                }
                if(i!= largest){
                    swap(arr[i], arr[largest]);
                    i = largest;
                }
                else{
                    break;
                }
            }
            return ans;
        }
        void print(){
            for(int i=1; i<=len; i++){
                cout<<arr[i]<<" , ";
            }
            cout<<endl;
        }
        
};

void heapify(vector<int> &arr, int size, int i){
    while(i<size/2){
        int largest = i;
        int left = i*2;
        int right = i*2+1;
        if(left<=size && arr[largest]<arr[left]){
            largest = left;
        }
        if(right<=size && arr[largest]<arr[right]){
            largest = right;
        }
        if(i!=largest){
            swap(arr[i], arr[largest]);
            i = largest;
        }
        else{
            break;
        }
    }
}

void buildHeap (vector<int> &arr, int size){
    for(int i=size/2; i>0; i--){
        heapify(arr, size, i);
    }
}

vector<int> heapSort(vector<int> &arr, int size){
    vector<int> ans;
    while(size>0){
        ans.push_back(arr[1]);
        swap(arr[1], arr[size]);
        size--;
        int i = 1;
        while(i<=size){
            int left = i*2;
            int right = i*2 + 1;
            int largest = i;
            if(left <= size && arr[left]>arr[largest]){
                largest = left;
            }
            if(right <= size && arr[right]>arr[largest]){
                largest = right;
            }
            if(i!=largest){
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else{
                break;
            }
        }
    }
    return ans;
}


int main() {
    // Write C++ code here
    //Heap Insetion and Deletion
    
    Heap h;
    h.push(60);
    h.push(50);
    h.push(40);
    h.push(30);
    h.push(20);
    h.push(55);
    h.print();
    cout<<h.pop()<<endl;
    h.print();
    
    //Build Heap using Heapify
    vector<int> arr = {-1, 54, 53, 55, 52, 50};
    buildHeap(arr, 5);
    for(int i=1; i<=5; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
    
    vector<int> heap = {-1,60,50,55,30,20,40};
    vector<int> arr = heapSort(heap, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
    
    

    return 0;
}



*/