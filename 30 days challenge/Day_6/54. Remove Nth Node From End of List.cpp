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

int length(ListNode*head){
    int len  = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head->next == NULL){
            return NULL;
        }

        int len = length(head);
        int nodetodelete = (len-n)+1;
        int cnt =0  ;
        ListNode*curr= head;
        ListNode*prev = head;
        
        if(nodetodelete == 1){
            head = head->next;
            curr->next =NULL;
        }
        else{
       nodetodelete--;
        while(curr!=NULL && cnt<nodetodelete){
           
           cnt++;
           prev = curr;
           curr = curr->next;
        }
        prev->next =curr->next;
        curr->next = NULL;
        }
        return head;
        
    }
};                                      