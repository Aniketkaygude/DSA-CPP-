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
public:
    ListNode* removeElements(ListNode* head, int target) {
         
         if(!head || !head->next && head->val == target){
            return NULL;
         }

         ListNode* prev=head;
         ListNode* curr =head->next;

         while(curr && head && prev){
                
             while(head !=NULL && head->val == target){
                head=head->next;
                prev=head;
                curr=head!=NULL?head->next:NULL;   
             }

            while(curr && curr->val == target){
                 curr=curr->next;
                 prev->next =curr;   
             }
            curr=curr!=NULL ? curr->next:NULL ;
            prev=prev!=NULL ?prev->next:nullptr;
            

         } 
        
         return head;

    }
};