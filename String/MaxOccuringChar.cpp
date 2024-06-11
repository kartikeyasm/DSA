#include<iostream>
#include<vector>

using namespace std;

int maxIndex(vector<int> &count){
        int max=count[0];
        for(int i=1;i<1000;i++){
            if(count[i]>count[max]){
                max=i;
            }
        }
        return max;
    }


    //Function to find the maximum occurring character in a string.
char getMaxOccuringChar(string str)
{
// Your code here
    vector<int> count(1000, 0);
    for(char i:str){
        count[int(i)]++;
    }
    int max=maxIndex(count);
    return char(max);    
}

int main(){
    cout<<getMaxOccuringChar("Hello World");
    
    return 0;
}