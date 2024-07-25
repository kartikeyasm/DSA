/* Q Vertical Order Traversal [Lecture 64]

//https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

vector<int> verticalOrder(Node *root){
    //Your code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,map<int,vector<int>>> nodes;    //map(HD,map(level,nodes->data))
    queue<pair<Node*, pair<int,int>>> q;    //queue(pair(Node,pair(HD,Level)))
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty()){
        pair<Node*, pair<int,int>> temp=q.front();
        q.pop();
        Node* tempNode=temp.first;
        int HD=temp.second.first;            //Horizontal Distance
        int lvl=temp.second.second;
        nodes[HD][lvl].push_back(tempNode->data);
        if(tempNode->left){
            q.push(make_pair(tempNode->left,make_pair(HD-1,lvl+1)));
        }
        if(tempNode->right){
            q.push(make_pair(tempNode->right,make_pair(HD+1,lvl+1)));
        }
    }
    for(auto i:nodes){
        for(auto j: i.second){
            for(auto k: j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
    
    
}



*/