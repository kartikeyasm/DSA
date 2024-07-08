#include<iostream>
#include<vector>

using namespace std;

class NStack{
    int *arr;
    int *top;
    int* next;
    int n,s;
    int freespot;


public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n=N;
        s=S;
        arr=new int[s];
        top=new int[n];
        next=new int[s];
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        for(int i=0;i<s-1;i++){
            next[i]=i+1;
        }
        next[s-1]=-1;

        freespot=0;
        // Write your code here.
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        //Check for overflow
        if(freespot==-1){
            return false;
        }

        //Step 1 Find Index
        int index=freespot;
        //Step 2 Update Freespot
        freespot=next[index];
        //Step 3 Insert in array
        arr[index]=x;
        //Step 4 Update next
        next[index]=top[m-1];
        //Step 5 Update Top
        top[m-1]=index;
        return true;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        //Check underflow
        if(top[m-1]==-1){
            return -1;
        }

        //Reverse of Push
        int index=top[m-1]; 
        top[m-1]=next[index];

        next[index]=freespot;
        freespot=index;
        return arr[index];
    }
};


int main(){


    return 0;
}