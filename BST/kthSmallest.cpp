//https://www.naukri.com/code360/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=0&leftPanelTabValue=SUBMISSION

//Inorder Traversal

/*  O(n), O(h)

int kthSmallest(BinaryTreeNode<int>* root, int& k) {
    // Write your code here.
    if(root==NULL){
        return -1;
    }
    
    int left=kthSmallest(root->left, k);
    if(left!=-1){
        return left;
    }
    k--;
    if(k==0){
        return root->data;
    }
    int right=kthSmallest(root->right, k);
    return right;
}

*/