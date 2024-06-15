#include<iostream>
#include<vector>

using namespace std;

//Count Ways To Reach The N-th Stairs
/*You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
Each time, you can climb either one step or two steps.
You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.*/


int countDistinctWays(int nStairs) {    // RR=> f(n)=f(n-1)+f(n-2)   [Page No. 65]  [But optimal solution is through DP only]

    if(nStairs<0){
        return 0;
    }
    else if(nStairs==0){
        return 1;
    }
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}

int main(){
    cout<<countDistinctWays(5);

    return 0;
}