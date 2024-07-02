#include<iostream>
#include<vector>

using namespace std;

/* Q21. Merge Two Sorted Lists (https://leetcode.com/problems/merge-two-sorted-lists/description/)

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

*/


//First check which list has smaller element at first then start inserting nodes of second list(q) into first(p) if p0->val<=q0->val<p1->val
/*

    void solve(ListNode* &list1, ListNode* &list2){
        ListNode* p0=list1;
        ListNode* p1=list1->next;
        ListNode* q0=list2;
        while(p1!=NULL && q0!=NULL){
            if(p0->val<=q0->val && q0->val<p1->val){
                ListNode* q1=q0->next;
                p0->next=q0;
                q0->next=p1;
                p0=q0;
                q0=q1;
            }
            else{
                p0=p0->next;
                p1=p1->next;
            }

        }
        if(p1==NULL){
            p0->next=q0;
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        else if(list1->val<=list2->val){
            solve(list1,list2);
            return list1;
        }
        else{
            solve(list2,list1);
            return list2;
        }
    }

*/

int main(){


    return 0;
}