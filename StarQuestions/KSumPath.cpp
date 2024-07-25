// Q K Sum Path
// Find number of paths whose sum is equal to K

//https://www.geeksforgeeks.org/problems/k-sum-paths/1



/*Approach 1=> Create an array that stores the values of nodes and when the sum from last is equal to K count++ (recursion + backtracking)

//TC=> O(n^2), SC=>O(h)



void solve(Node* root, int k, int &ans, vector<int> arr){
    if(root==NULL){
        return;
    }
    arr.push_back(root->data);
    solve(root->left,k,ans,arr);
    solve(root->right,k,ans,arr);
    
    int sum=0;
    int len=arr.size();
    for(int i=len-1;i>=0;i--){
        sum+=arr[i];
        if(sum==k){
            ans++;
        }
    }
    arr.pop_back();
}

int sumK(Node *root,int k)
{
    // code here
    int ans=0;
    if(root==NULL){
        return ans;
    }
    vector<int> arr;
    solve(root,k,ans,arr);
    return ans;
}

*/




/* Approach 2=> Using hashmaps (Very important) it stores current sum and if sum could be completed with prev values present in map
//TC=> O(n)  SC=>O(h)
//Must read editorial for this

#define mod (int)(1e9+7)

void solve(Node* root, int k, int currSum, int &ans, unordered_map<int,int> m){
    if(root==NULL){
        return;
    }
    
    ans+=m[currSum+root->data-k];
    
    if(ans>=mod){
        ans=ans%mod;
    }
    
    if(currSum+root->data==k){
        ans++;
    }
    m[currSum+root->data]++;
    
    if(m[currSum+root->data]>=mod){
        m[currSum+root->data]%=mod;
    }
    
    solve(root->left, k, currSum+root->data, ans, m);
    solve(root->right, k, currSum+root->data, ans, m);
    
    m[currSum+root->data]--;
    
    if(m[currSum+root->data]<0){
        m[currSum+root->data]+=mod;
    }
}

int sumK(Node *root,int k)
{
    int ans=0;
    int currSum=0;
    unordered_map<int,int> m;
    solve(root, k, currSum, ans, m);
    return ans;
}


*/