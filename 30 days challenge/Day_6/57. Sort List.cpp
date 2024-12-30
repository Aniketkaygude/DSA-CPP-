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

ListNode*find(ListNode*head){
   ListNode*slow = head;
     ListNode*fast = head->next;

     while(fast!=NULL &&fast->next!=NULL){
         slow = slow->next;
         fast = fast->next->next;
     }

     return slow;
}

ListNode*merge(ListNode*left,ListNode*right){
     
     if(left == NULL){
        return right;
     }
     if(right == NULL){
        return left;
     }
 
   ListNode*head=new ListNode(-1);
   ListNode*tail=head;
    
   while(left && right){ 
     if(left->val<right->val){
        tail->next=left;
        tail=left;
        left=left->next;
     }
     else{
       
        tail->next=right;
        tail=right;
        right=right->next;
     }
   } 

   if(left){
    tail->next=left;
   }
   if(right){
    tail->next=right;
   }

   return head->next;


}

    ListNode* sortList(ListNode* head) {
    
     if(head == NULL || head->next == NULL){
        return head;
     }

     ListNode*mid = find(head);
     ListNode*left= head;
     ListNode*right =mid->next;
     mid->next = NULL;

      left = sortList(left);
      right =sortList(right);

      ListNode*ans=merge(left,right);
      return ans;
        
    }
};