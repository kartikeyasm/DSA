//BST to AVL
//https://www.naukri.com/code360/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION


//Convert BST to Array using inOrder Traversal
//Array[mid]=root and left=0, mid-1   and right= mid+1,n-1
/*

void inOrder(TreeNode<int>* root, vector<TreeNode<int>*>& arr){
    if(root==NULL){
        return;
    }
    inOrder(root->left, arr);
    arr.push_back(root);
    inOrder(root->right, arr);
}

TreeNode<int>* solve(int s, int e, vector<TreeNode<int>*>& arr){
    if(s>e){
        return NULL;
    }
    int mid= s+(e-s)/2;
    TreeNode<int>* left=solve(s, mid-1, arr);
    TreeNode<int>* right=solve(mid+1, e, arr);
    arr[mid]->left=left;
    arr[mid]->right=right;
    return arr[mid];
}



TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<TreeNode<int>*> arr;
    inOrder(root, arr);
    int n=arr.size();
    return solve(0,n-1, arr);

}

*/