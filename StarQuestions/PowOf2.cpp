/*Given an integer n, return true if it is a power of two. Otherwise, return false.*/

/*Approach 1: 2^x=100....0 in binary therefore rightshift the number until you find first 1bit and then again right shift the number and check if the number is 0 or not if 0 then return true else false

bool isPowerOfTwo(int n) {
    while(n>0){
        if(n&1){
            n=n>>1;
            if(!n){
                return true;
            }
            else{
                return false;
            }
        }
        n=n>>1;
    }
    return false;
}

*/


/*Approach 2: As there is a limit in int numbers (that is from -2^31 to 2^31-1) therefore we can use a set a initial value to 1 and compare it with n and then using loop we multiply the value by 2 and keep on comparing it with 2 until value becomes grater than n

bool isPowerOfTwo(int n){
    int ans=1;
    while (ans<n){
        if (ans==n){
            return true;
        }
        ans*=2;
    }
    return false;
}

*/