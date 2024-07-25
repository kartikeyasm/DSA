//Q Lowest Common Ancestor
//https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

/* Approach 1=> using path and then finding the last common ancestor


*/
/* Approach 2=> Recursive Calls if finds a node returning to common node where both the calls get returnd first time


Node* lca(Node* root ,int n1 ,int n2 )
{
    //Your code here 
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    
    
    Node* left=lca(root->left,n1,n2);
    Node* right=lca(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    else if(left==NULL){
        return right;
    }
    else if(right==NULL){
        return left;
    }
    else{
        return NULL;
    }
}
*/