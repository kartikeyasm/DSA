//Minimum Time to burn a bin tree
//https://www.geeksforgeeks.org/problems/burning-tree/1

/*O(N) or O(NlogN) [Depending upon insertion in map]  ,O(N)


//Create Mapping and return targetNode
Node* mappingFunc(Node* root, map<Node*, Node*> &nodeToParent, int target){
    if(root==NULL){
        return NULL;
    }
    Node* targetNode=NULL;
    queue<Node*> q;
    q.push(root);
    nodeToParent[root]=NULL;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->data==target){
            targetNode=temp;
        }
        if(temp->left){
            q.push(temp->left);
            nodeToParent[temp->left]=temp;
        }
        if(temp->right){
            q.push(temp->right);
            nodeToParent[temp->right]=temp;
        }
    }
    return targetNode;
}


//Function to do BFS and return time to burn tree from target node
int BFS(Node* targetNode, map<Node*, Node*> nodeToParent){
    int ans=0;
    map<Node*, bool> visited;
    queue<Node*> q;
    q.push(targetNode);
    visited[targetNode]=true;
    while(!q.empty()){
        bool isInserted=false;
        int len=q.size();
        for(int i=0;i<len;i++){
            Node* temp=q.front();
            q.pop();
            if(nodeToParent[temp] && !visited[nodeToParent[temp]]){
                q.push(nodeToParent[temp]);
                visited[nodeToParent[temp]]=true;
                isInserted=true;
            }
            if(temp->left && !visited[temp->left]){
                q.push(temp->left);
                visited[temp->left]=true;
                isInserted=true;
            }
            if(temp->right && !visited[temp->right]){
                q.push(temp->right);
                visited[temp->right]=true;
                isInserted=true;
            }
            
        }
        if(isInserted){
            ans++;
        }
    }
    return ans;
}


int minTime(Node* root, int target) 
{
    // Your code goes here
    map<Node*, Node*> nodeToParent;
    Node* targetNode=mappingFunc(root,nodeToParent, target);
    int ans=BFS(targetNode, nodeToParent);
    return ans;
    
}


*/