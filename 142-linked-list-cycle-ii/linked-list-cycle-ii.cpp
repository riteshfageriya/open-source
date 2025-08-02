/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        map<ListNode* ,int>mpp;
        

        ListNode*temp=head;
        // mpp{temp->val}=0;

        while(temp!=NULL){
            mpp[temp]++;
            if(mpp[temp]==2) return temp;
            temp=temp->next;
            
        }

    
        return NULL;
        
    }
};