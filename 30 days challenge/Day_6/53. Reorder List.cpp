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
    void reorderList(ListNode* head) {

        vector<int>node;
        ListNode*temp=head;

        while(temp){
         node.push_back(temp->val);
         temp=temp->next;
        }
        
        int s=0;
        int e=node.size()-1;
        temp=head;
        bool dir=true;
        while(s<=e){
         
         if(dir){
            temp->val = node[s];
          s++;
         }
         if(!dir){
            temp->val=node[e];
            e--;
         }
         dir=!dir;
         temp=temp->next;
        }
        
        
    }
};