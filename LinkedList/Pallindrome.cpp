#include<iostream>
#include<vector>

using namespace std;

/*Q234. Palindrome Linked List (https://leetcode.com/problems/palindrome-linked-list/description/)
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
*/





//Approach 1 [O(n), O(n)]  (Creating a vector that stores all the node->data and then we check if it is a palindrome or not using arrays concept)
/*  App


*/



//Approach 2 [O(n), O(1)] (Reverse the second half of the list and then compare both the halfs)
/*
ListNode* rev(ListNode* head){
        ListNode* prev=NULL;
        ListNode* current=head;
        while(current!=NULL){
            ListNode* next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        fast=head;
        ListNode* secondHalf=slow->next;
        secondHalf=rev(secondHalf);
        while(secondHalf!=NULL && fast!=slow->next){
            if(secondHalf->val!=fast->val){
                return false;
            }
            secondHalf=secondHalf->next;
            fast=fast->next;
        }
        return true;

    }
*/



int main(){


    return 0;
}