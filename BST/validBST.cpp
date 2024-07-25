//https://www.naukri.com/code360/problems/validate-bst_799483?leftPanelTab=0&leftPanelTabValue=SUBMISSION

/* Approach 1=> Using inorder traversal*/

/* Approach 2=> Using min and max and validate each node of subtree
// O(logN), O(h)

bool solve(BinaryTreeNode<int> *root, int mini, int maxi){
    if(root==NULL){
        return true;
    }
    if(root->data>maxi || root->data<mini){
        return false;
    }
    bool left=solve(root->left, mini, root->data);
    bool right=solve(root->right, root->data, maxi);
    return left && right;
}


bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return true;
    }
    bool ans=solve(root, INT_MIN, INT_MAX); 
    return ans;
}

*/