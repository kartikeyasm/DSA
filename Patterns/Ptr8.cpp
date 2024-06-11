#include<iostream>
using namespace std;
/*                                            //Alternative way using Sum 
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        int sum=i+1;
        for (int j=0;j<=i;j++){
          cout<<sum<<" ";
          sum+=1;  
        }
        cout<<endl;
    }
    return 0;
}

*/
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        for (int j=0;j<=i;j++){
          cout<<i+1+j<<" ";  
        }
        cout<<endl;
    }
    return 0;
}