#include<iostream>
using namespace std;

/*If arr[mid]>=arr[0]  mid lies on upper/first line
  else mid lies on lower/second line
*/


int main(){
    int arr[]={7,8,1,2,3};
    int start=0;
    int end=sizeof(arr)/sizeof(int)-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    cout<<arr[start];
    return 0;
}