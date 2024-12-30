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
    ListNode* deleteDuplicates(ListNode* head) {
       if(head == NULL || head->next ==NULL){
        return head;
       }

      map<int,int>m;

      ListNode*temp = new ListNode(-1);
      ListNode*tail = temp;

      while(head!=NULL){
        m[head->val]++;
        head=head->next;
      }

      

      for(auto i:m){
        cout<<i.first<<" --> "<<i.second<<endl;
        if( i.second==1 ){
            ListNode* newNode= new ListNode(i.first);
            tail->next= newNode;
            tail=newNode;
        }
      }
     
   
     return temp->next;

    }
};

















