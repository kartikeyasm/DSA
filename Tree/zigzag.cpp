//Q ZigZag Tree Travesal

//https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1

/* 


vector <int> zigZagTraversal(Node* root)
{
    // Code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    bool leftToRight=true;
    
    while(!q.empty()){
        int size=q.size();
        vector<int> level(size);
        
        
        for(int i=0;i<size;i++){
            Node* front=q.front();
            q.pop();
            
            int index= leftToRight ? i : size-i-1;
            level[index]=front->data;
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
        leftToRight=!leftToRight;
        for(int i:level){
            ans.push_back(i);
        }
    }
    return ans;
}


 
*/