/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
    ListNode* getMiddle(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
   }
    ListNode* reverse(ListNode*head){
        ListNode*prev=NULL;
        ListNode*curr=head;

        while(curr!=NULL){
        ListNode*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
        }
        return prev;

    }

public:
    bool isPalindrome(ListNode* head) {

        if(head->next==NULL && head==NULL) return true;

        ListNode*middle=getMiddle(head);

        ListNode*temp=reverse(middle);
      

        ListNode*newhead=temp;

        while(newhead!=NULL){

       
        if(head->val!=newhead->val) {
            return false;

         }
         head=head->next;
         newhead=newhead->next;
    }
      
    return true;
    }
};