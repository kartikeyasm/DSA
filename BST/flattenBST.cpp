//Flatten a BST
//https://www.naukri.com/code360/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=0&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

//TC=> O(n) SC=>O(n)
/*


void inOrder(TreeNode<int>* root, vector<TreeNode<int>*>& arr){
    if(root==NULL){
        return;
    }
    inOrder(root->left, arr);
    arr.push_back(root);
    inOrder(root->right, arr);

}


TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    if(root==NULL){
        return root;
    }
    vector<TreeNode<int>*> arr;
    inOrder(root, arr);
    int n=arr.size();

    for(int i=0;i<n-1;i++){
        arr[i]->left=NULL;
        arr[i]->right=arr[i+1];
    }
    arr[n-1]->left=NULL;
    arr[n-1]->right=NULL;
    return arr[0];
}

*/