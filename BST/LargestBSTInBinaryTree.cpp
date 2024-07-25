//Find the number of nodes in the largest BST in a binary tree
//https://www.naukri.com/code360/problems/largest-bst-subtree_893103?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&count=25&page=1&search=&sort_entity=order&sort_order=ASC

/*  Apprach 1=> Check each node if it is a valid BST or not if yes then update answer by comparing it with previous answer
             => O(n^2) SC=> O(h)

*/




/*  Approach 2=> Use previosly computed data for future comparisons
              => TC=> O(n) SC=> O(h)

class info{
    public:
        int maxi;
        int mini;
        int size;
        bool isBST;
};

info solve(TreeNode* root, int& maxSize){
    if(root==NULL){
        return {INT_MIN, INT_MAX, 0, 1};
    }
    info left=solve(root->left, maxSize);
    info right=solve(root->right, maxSize);

    info current;
    current.size=left.size + right.size + 1;
    current.maxi=max(right.maxi, root->data);
    current.mini=min(left.mini, root->data);
    current.isBST = left.isBST && right.isBST && root->data>left.maxi && root->data<right.mini;
    
    if(current.isBST){
        maxSize=max(maxSize, current.size);
    }
    return current; 
}



int largestBST(TreeNode * root){
    // Write your code here.
    if(root==NULL){
        return 0;
    }
    int maxSize=1;
    info temp=solve(root, maxSize);
    return maxSize;
}

*/