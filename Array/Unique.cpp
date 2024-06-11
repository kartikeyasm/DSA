#include<iostream>
using namespace std;

//Find the first Unique element in the array


/*  Method 1(Brute Force O(n^2)): Using nested loops and counter 


int unique(int arr[],int n){
    
    for (int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count==1){
            return arr[i];
        }
    }
    return -1;
}
*/

/*Method 2(Opptimised Method O(n)): Using XOR operator i.e. A^A=0 and A^0=A therefore if there are N elements in an array such that 2M+1=N where M are duplicate elements then it will return true iff there exist a unique element eg {1,2,3,4,3,2,1} then unique=1^2^3^4^3^2^1=4
*/

int unique(int arr[],int n){
    int unique=0;
    for(int i=0;i<n;i++){
        unique=unique^arr[i];
    }
    return unique;
}

int main(){
    int len;
    cin>>len;
    int arr[100];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }


    if (unique(arr,len)==-1){
        cout<<"There is no unique element in the given array."<<endl;
        
    }
    else{
        cout<<"First unique element= "<<unique(arr,len)<<endl;
    }
    

}