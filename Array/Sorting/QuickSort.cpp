#include<iostream>
#include<vector>

using namespace std;

int partition(int arr[], int s, int e){
    //Declaring Pivot Element
    int pivot=s;
    
    //Count Number of Elements smaller than Pivot Element
    int count=0;
    for(int i=s;i<=e;i++){
        if(arr[i]<arr[pivot]){
            count++;
        }
    }
    //Place Pivot element to its correct position
    swap(arr[pivot],arr[count+s]);
    pivot=count+s;
    
    //Placing all elements to there correct part (left or right)
    int i=s;
    int j=e;
    while(i<pivot && j>pivot){
        if(arr[i]>arr[pivot] && arr[j]<arr[pivot]){
            swap(arr[i++],arr[j--]);
        }
        while(arr[i]<arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
    }
    return pivot;
}

void QuickSort(int arr[], int s, int e){
    //Base Case
    if(s>=e){
        return;
    }

    //Partition
    int p=partition(arr,s,e);
    //Recursion Call for left and right sub-array
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}


int main(){
    int arr[]={3,4,1,2,6,8,7,1,1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;



    return 0;
}