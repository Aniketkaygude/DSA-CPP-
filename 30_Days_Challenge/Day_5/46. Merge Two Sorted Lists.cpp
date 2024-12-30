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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* ans=new ListNode(-1);
        ListNode*tail=ans;

       while( list1 && list2){
         ListNode*newNode;
         if(list1->val<list2->val){
           newNode =new ListNode(list1->val);
           list1=list1->next;
         }        
         else{
            newNode=new ListNode(list2->val);
            list2=list2->next;
         }

         tail->next = newNode;
         tail=newNode;
       }

      
        if(list1){
        tail->next=list1;
       }
       if(list2){
        tail->next=list2;
       }

       return ans->next;

    }
};