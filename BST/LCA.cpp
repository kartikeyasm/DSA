//LCA in a BST
//https://www.naukri.com/code360/problems/lca-in-a-bst_981280?leftPanelTab=0&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION
/*


TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // Write your code here.
    if(root==NULL){
        return NULL;
    }

    while(root){
        if(P->data > root->data  &&  root->data < Q->data ){
            root=root->right;
        }
        else if(P->data < root->data  &&  root->data > Q->data ){
            root=root->left;
        }
        else{
            return root;
        }
    }
    return root;
}


*/