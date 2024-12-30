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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
       
       int cnt =0;
       stack<int>st;
       ListNode*temp1 =head;
        while(cnt<left-1){
           temp1=temp1->next;
           cnt++;
        }
        ListNode*temp2 =temp1;
        
        while(cnt<right){
            cnt++;
            st.push(temp1->val);
            temp1=temp1->next;
        }

        while(temp2!=temp1){
            temp2->val = st.top();
            st.pop();
            temp2=temp2->next;
        }
       // temp2->val = st.top();

        return head;


    }
};