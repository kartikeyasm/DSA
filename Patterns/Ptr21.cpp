#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for (int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<=i;j++){
            cout<<" ";
        }
        for (int j=0;j<n-i-1;j++){
            cout<<j+1;
        }
        for (int j=n-i-2;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}