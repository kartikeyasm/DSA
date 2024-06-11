#include<iostream>
using namespace std;
int main(){
    int n,sum=1;
    cin>>n;
    for (int i=0; i<n;i++){
        for (int j=n;j>0;j--){
          cout<<sum<<"\t";
          sum+=1;  
        }
        cout<<endl;
    }
    return 0;
}