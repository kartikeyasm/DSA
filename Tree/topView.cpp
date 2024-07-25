//Q Top View of Binary Tree  [Same approac as of vertical order traversal "./verticalOrderTraversal.cpp"]
//https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

/*  

vector<int> topView(Node *root){
    //Your code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> top;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*, int> temp=q.front();
        q.pop();
        Node* tempNode=temp.first;
        int HD=temp.second;
        if(top[HD]==0){
            top[HD]=tempNode->data;
        }
        if(tempNode->left){
            q.push(make_pair(tempNode->left,HD-1));    
        }
        if(tempNode->right){
            q.push(make_pair(tempNode->right,HD+1));    
        }
    }
    for(auto i:top){
        ans.push_back(i.second);
    }
    return ans;
}



*/