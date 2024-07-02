#include<iostream>
#include<vector>

using namespace std;

/*Q61. Rotate List  (https://leetcode.com/problems/rotate-list/description/)

*/

//Similar to array, reverse whole list then reverse two parts of the list 1st (0 to k-1) and then (k to n-1)
/*

    ListNode* rev(ListNode* head, int index=-1){
        if(index==-1){
            if(head==NULL || head->next==NULL){
                return head;
            }
            ListNode* prev=NULL;
            ListNode* current=head;
            while(current!=NULL){
                ListNode* next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
            head=prev;
            return head;
        }
        else{
            if(head==NULL || head->next==NULL){
                return head;
            }
            ListNode* prev=NULL;
            ListNode* current=head;
            while(current!=NULL && index>0){
                ListNode* next=current->next;
                current->next=prev;
                prev=current;
                current=next;
                index--;
            }
            head=prev;
            return head;
        }
        

    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        k=k%count;
        if(k==0){
            return head;
        }
        head=rev(head);
        temp=head;
        int i=k;
        while(i>0){
            temp=temp->next;
            i--;
        }
        temp=rev(temp);
        head=rev(head,k);
        ListNode* head2=head;
        while(head2->next!=NULL){
            head2=head2->next;
        }
        head2->next=temp;
        return head;
    }

*/



int main(){


    return 0;
}