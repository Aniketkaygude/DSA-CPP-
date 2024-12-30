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

class cmp{
    public:

    bool operator()(ListNode*a,ListNode*b){
        return a->val>b->val;
    }
};

    ListNode* mergeKLists(vector<ListNode*>& lists) {
         priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
           for(int i=0;i<lists.size();i++){
             ListNode*temp = lists[i];
             while(temp!=NULL){
                pq.push(temp);
                temp=temp->next;
             }
           }

           ListNode* head=new ListNode(-1);
           ListNode* temp=head;

           while(!pq.empty()){
            ListNode* newnode=pq.top();pq.pop();
            temp->next=newnode;
            temp=newnode; 
            temp->next=NULL;
           }

           return head->next;
             
    }
};