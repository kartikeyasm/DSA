#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cin>>n;
    for (int i=0; i<n;i++){
        for (int j=i;j<n+i;j++){
          cout<<char(ch+j);
        }
        cout<<endl;
    }
    return 0;
}


