#include<iostream>
#include<vector>

using namespace std;


/*Optimal Solution Segmented Sieve*/
vector<int> primeN(int n){
    vector <int> arr(n,1);
    for(int i=2;i*i<n;i++){
        if(arr[i]==1){
            for(int j=2*i;j<n;j+=i){
                arr[j]=0;
            }
        }    
    }
    return arr;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr=primeN(n);
    cout<<"Prime Numbers are: ";
    for(int i=2;i<n;i++){

        if(arr[i]==1){
            cout<<i<<',';
        }
    }
    cout<<endl;
    return 0;
}
