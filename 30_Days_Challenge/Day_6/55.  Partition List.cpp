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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode*small=new ListNode(-1);
        ListNode*small_tail= small;

        ListNode*big = new ListNode(-1);
        ListNode*big_tail = big;

        ListNode* temp = head;

        while(temp!=NULL){
            ListNode*newNode=new ListNode(temp->val);
          if(temp->val<x){
            small_tail->next=newNode;
            small_tail=newNode;
          }
          else{
            big_tail->next = newNode;
            big_tail=newNode;
          }
          temp=temp->next;
        }

        small_tail->next=big->next;
        return small->next;


        
    }
};