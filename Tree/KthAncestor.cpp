//Find Kth ancestor of the given node
//https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1
//https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1

/*Approach 1=> Create an array of path and traverse it from backwards to find kth ancestor
//O(h), O(h)

void solve(Node* root, int node, vector<int> &path,bool &found){
    if(root==NULL || found){
        return;
    }
    path.push_back(root->data);
    if(root->data==node){
        found=true;
        return;
    }
    solve(root->left, node, path, found);
    if(found){
        return;
    }
    solve(root->right, node, path, found);
    if(found){
        return;
    }
    path.pop_back();
    
}



int kthAncestor(Node *root, int k, int node)
{
    // Code here
    if(root==NULL){
        return -1;
    }
    vector<int> path;
    bool found=false;
    solve(root,node, path,found);
    if(path.size()+1<k){
        return -1;
    }
    return path[path.size()-1-k];
}


*/


/* Approach 2=> 

*/