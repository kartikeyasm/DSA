#include<iostream>
#include<vector>

using namespace std;

/*Q2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

*/


//Add two Numbers by adding nodes->val and storing carry into a variable [O(m+n),O(m+n)]
/*

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=NULL;
        ListNode* sum=new ListNode(0);
        head=sum;
        sum->val=(l1->val+l2->val+carry)%10;
        carry=(l1->val+l2->val+carry)/10;
        l1=l1->next;
        l2=l2->next;
        while(l1!=NULL && l2!=NULL){
            ListNode* temp=new ListNode((l1->val+l2->val+carry)%10);
            carry=(l1->val+l2->val+carry)/10;
            sum->next=temp;
            sum=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            ListNode* temp=new ListNode((l1->val+carry)%10);
            carry=(l1->val+carry)/10;
            sum->next=temp;
            sum=temp;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* temp=new ListNode((l2->val+carry)%10);
            carry=(l2->val+carry)/10;
            sum->next=temp;
            sum=temp;
            l2=l2->next;
        }
        if(carry>0){
            ListNode* temp=new ListNode(carry);
            sum->next=temp;
        }
        return head;
    }

*/

int main(){


    return 0;
}