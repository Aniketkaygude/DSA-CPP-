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

void helper(ListNode*&l1,ListNode*&l2,int carry,ListNode*&tail){
    if(l1==NULL && l2 == NULL && carry==0){
        return;
    }

    int sum1=0;
    int sum2=0;

    if(l1!=NULL){
        sum1=l1->val;
    }

    if(l2!=NULL){
        sum2=l2->val;
    }

     int total=sum1+sum2+carry;
     carry=total/10;
     int add=total%10;

     ListNode*to_add=new ListNode(add);
     tail->next=to_add;
     tail=to_add;

     helper(l1==NULL?NULL:l1->next,l2==NULL?NULL:l2->next,carry,tail);

}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
         ListNode*temp=new ListNode(-1);
         ListNode*tail=temp;
          
         helper(l1,l2,0,tail);

         return temp->next;


    }
};