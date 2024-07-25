//Approach 1=> Create BST by inserting all values individually  => O(n^2)

//Approach 2=> Sort preorder to inorder and then create tree by taking mid as root => O(NlogN)

//Approach 3=> First elemment = root and then left= array till element<root   and right= array from where element>root (recursion) 
//          => Avg time Complexity      O(NlogN)
//          => Worst time Complexity    O(N^2)   [Skewed Tree]


//Approach 4=> Using range approach root (range-> [INT_MIN, INT_MAX])  root->left (range-> [INT_MIN, root->data]) root->right (range-> [root->data, INT_MAX])
//          => Worst Time Complexity    O(N)







/* Approach 3

BinaryTreeNode<int>* solve(int s, int e, vector<int> &preorder){
    if(s>e){
        return NULL;
    }
    int i=s;
    for(i==s;i<=e;i++){
        if(preorder[i]>preorder[s]){
            break;
        }
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(preorder[s]);
    BinaryTreeNode<int>* left=solve(s+1, i-1, preorder); 
    BinaryTreeNode<int>* right=solve(i, e, preorder);
    root->left=left; 
    root->right=right;
    return root; 
}


BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int n=preorder.size();
    return solve(0, n-1, preorder);

}

*/


/*   Approach 4

BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int &i){
    if(i>=preorder.size() || preorder[i]<mini || preorder[i]>maxi){
        return NULL;
    }
    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(preorder[i++]);
    root->left=solve(preorder, mini, root->data, i);
    root->right=solve(preorder, root->data, maxi, i);
    return root;
}


BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int i=0;
    return solve(preorder, INT_MIN, INT_MAX, i);
}

*/