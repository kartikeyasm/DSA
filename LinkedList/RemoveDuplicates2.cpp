#include<iostream>
#include<vector>

using namespace std;


class ListNode{
    public:
        int val;
        ListNode *next;

        ListNode(int data){
            this->val=data;
            this->next=NULL;
        }
};

void printLL(ListNode* &head){
    ListNode* temp=head;
    cout<<"Head -> ";
    while(temp!=NULL){
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}





ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* temp=head;
        ListNode* del=head;
        while(temp!=NULL && del!=NULL){
            int count=0;
            while(del->val==temp->val){
                count++;
                del=del->next;
            }
            if(count>1 && temp==head){
                head=del;
                while(prev!=del){
                    ListNode* rem=prev;
                    prev=prev->next;
                    delete prev;
                }

            }
            else if(count>1){
                prev->next=del;
                while(temp!=del){
                    ListNode* rem=temp;
                    temp=temp->next;
                    delete temp;
                }
            }
            else if(count<=1){
                prev=temp;
                temp=del;
            }
        }
        return head;
        
    }


int main(){
    ListNode* head=NULL;
    head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(3);
    head->next->next->next->next=new ListNode(4);
    head->next->next->next->next->next=new ListNode(4);
    head->next->next->next->next->next->next=new ListNode(5);
    printLL(head);
    head=deleteDuplicates(head);
    printLL(head);

    return 0;
}