#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cin>>n;
    int i=n-1;
    while(i>=0){
        int j=i;
        while(j<n){
            cout<<char(ch+j);
            j++;
        }
        cout<<endl;
        i--;
    }

    return 0;
}


