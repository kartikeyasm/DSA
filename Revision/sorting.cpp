#include<iostream>
#include<vector>

using namespace std;

void printArr(vector<int> &arr){
    for(int i:arr){
        cout<<i<<" , ";
    }
    cout<<endl;
}

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false){
            break;
        }
    }   
}

int minIndex(vector<int> &arr, int i, int n){
    int ans=i;
    int mini = arr[i];
    for(int j=i+1;j<n;j++){
        if(arr[j]<mini){
            mini = arr[j];
            ans = j;
        }
    }
    return ans;
}

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int j = minIndex(arr, i, n);
        swap(arr[i], arr[j]);
    }
}

void insertionSort(vector<int> &arr){
    int n= arr.size();
    for(int i=1 ;i<n; i++){
        int j=i;
        int temp = arr[j];
        while(j>0){
            if(arr[j-1]>temp){
                arr[j] = arr[j-1];
            }
            else{
                break;
            }
            j--;
        }
        arr[j] = temp;
    }
}

void merge(vector<int> &arr, int s, int e, int mid){
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int *first = new int[len1]; 
    int *second = new int[len2];
    int i=s; 
    for(int j=0; j<len1 ; j++){
        first[j] = arr[i];
        i++;
    }
    i = mid+1;
    for(int j=0; j<len2 ; j++){
        second[j] = arr[i];
        i++;
    }
    int index1=0;
    int index2=0;
    i = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[i] = first[index1];
            i++;
            index1++;
        }
        else{
            arr[i] = second[index2];
            i++;
            index2++;
        }
    }
    while(index1<len1){
        arr[i] = first[index1];
        index1++;
        i++;
    }
    while(index2<len2){
        arr[i] = second[index2];
        index2++;
        i++;
    }
    delete []first;
    delete []second;
}

void mergeSort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr,s,e,mid);
}

int partition(vector<int> &arr, int s, int e){
    int pivot = s;
    int count = 0;
    for(int i=s;i<=e;i++){
        if(arr[i]<arr[pivot]){
            count++;
        }
    }
    swap(arr[pivot], arr[s+count]);
    pivot = s+ count;
    int i= s;
    int j = e;
    while(i<pivot && j>pivot){
        while(arr[i]<arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
        if(arr[i]>=arr[pivot] && arr[pivot]>arr[j]){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot;
}

void quickSort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    int pivot = partition(arr, s, e);
    quickSort(arr, s, pivot-1);
    quickSort(arr, pivot+1, e);
}



int main(){
    vector<int> arr = {10,8,2,8,6,8,4,3,2,1};
    int len = arr.size();
    //bubbleSort(arr);
    //selectionSort(arr);
    //insertionSort(arr);
    //mergeSort(arr, 0, 9);
    quickSort(arr,0,len-1);
    printArr(arr);
    return 0;
}