//Q Diagonal Traversal of Binary Tree
//https://www.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

//1st Approach=> Consider each diagonal as same level   
/*
vector<int> ans;
if(root==NULL){
    return ans;
}

map <int,vector<int>> nodes;
queue <pair<Node*,int>> q;
q.push({root,0});

while(!q.empty()){
    pair<Node*,int> temp=q.front();
    q.pop();
    
    Node* tempNode=temp.first;
    int lvl=temp.second;
    
    nodes[lvl].push_back(tempNode->data);
    
    if(tempNode->left){
        q.push({tempNode->left,lvl+1});
    }
    if(tempNode->right){
        q.push({tempNode->right,lvl});
    }
}
for(auto i:nodes){
    for(auto j: i.second){
        ans.push_back(j);
    }
}
return ans;
*/


//2nd Approach
/*
vector<int> diagonal(Node *root)
{
    // your code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        while(temp){
            ans.push_back(temp->data);
            q.push(temp->left);
            temp=temp->right;
        }
    }
    return ans;
}
*/