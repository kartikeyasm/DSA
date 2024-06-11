#include<iostream>
using namespace std;
/*
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/4;
    int in,first=0,last=len-1;
    cout<<"Enter element to be serached: ";
    cin>>in;
    while (first<=last){
        int mid=(first+last)/2;
        if (arr[mid]==in){
            cout<<in<<" is presnt in given array at "<<mid+1<<" position"<<endl;
            return 0;
        }
        else if (arr[mid]>in){
            last=mid-1;
        }
        else{
            first=mid+1;
        }
    }

    cout<<in<<" is not present in given array"<<endl;    
    return 0;
}
*/

int binsearch(int arr[],int n,int find){
    int s=0,e=n-1;
    int mid;
    while(s<=e){
        mid=s+(e+s)/2;
        /*We should avoid using (s+e)/2 because there can be a corner case in which s+e>INT_MAX therefore to prevnet that situation we must break down our expression*/
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
int main(){
    int arr[]={5,6,7,8,9,11,13,15};
    int n=sizeof(arr)/4;
    int find;
    cout<<"Enter the number to be find: ";
    cin>>find;
    int pos=binsearch(arr,n,find);
    if(pos==-1){
        cout<<"Element not found";
    }
    else{
        cout<<find<<" is present at "<<pos<<" index";
    }
    return 0;
}