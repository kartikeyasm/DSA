//https://leetcode.com/problems/clone-graph/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/


/* 
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node){
            return NULL;
        }
        Node* ans = new Node(node->val);
        queue<Node*> q;
        unordered_map<Node*,Node*> clonedNode;
        clonedNode[node] = ans;
        q.push(node);
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            for(Node* i: temp->neighbors){
                if(!clonedNode.count(i)){
                    clonedNode[i] = new Node(i->val);
                    q.push(i);
                }
                clonedNode[temp]->neighbors.push_back(clonedNode[i]);
            }
        }
        return ans;
    }
};
*/