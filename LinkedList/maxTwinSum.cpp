
//Q2130  Maximum Twin Sum of a linked list
//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75


/*
In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.
The twin sum is defined as the sum of a node and its twin.

Given the head of a linked list with even length, return the maximum twin sum of the linked list.

*/


/*

int pairSum(ListNode* head) {
    int n=0;
    ListNode* temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    stack<int> s;
    temp=head;
    for(int i=0;i<(n/2);i++){
        s.push(temp->val);
        temp=temp->next;
    }
    int maxi=0;
    for(int i=0;i<(n/2);i++){
        if(maxi<( s.top() + temp->val ) ){
            maxi=s.top() + temp->val;
        }
        s.pop();
        temp=temp->next;
    }
    return maxi;

}




*/