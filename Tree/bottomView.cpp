//Q Bottom View of Binary Tree
//https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

/*  


vector <int> bottomView(Node *root) {
    // Your Code Here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> bottom;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*, int> temp=q.front();
        q.pop();
        Node* tempNode=temp.first;
        int HD=temp.second;
        bottom[HD]=tempNode->data;
        if(tempNode->left){
            q.push(make_pair(tempNode->left,HD-1));
        }
        if(tempNode->right){
            q.push(make_pair(tempNode->right,HD+1));
        }
    }
    for(auto i: bottom){
        ans.push_back(i.second);
    }
    return ans;
}

*/