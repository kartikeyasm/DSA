//Predecessor And Successor In BST
//https://www.naukri.com/code360/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&count=25&page=1&search=&sort_entity=order&sort_order=ASC

/*


pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    int pre=-1;
    int suc=-1;
    while(root && root->data!=key){
        if(root->data>key){
            suc=root->data;
            root=root->left;
        }
        else{
            pre=root->data;
            root=root->right;
        }
    }
    if(!root){
        return {pre,suc};
    }
    TreeNode* left=root->left;
    while(left){
        pre=left->data;
        left=left->right;
    }
    TreeNode* right=root->right;
    while(right){
        suc=right->data;
        right=right->left;
    }

    return {pre,suc};
}

*/