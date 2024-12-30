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

void insertattail(ListNode*&head ,ListNode*&tail,int d){
       
       	 if(head == NULL ){
	 	head = new ListNode(d);
	 	tail =head;
	 	return ;
	 }
	else{
		ListNode*temp=new ListNode(d);
	tail->next=temp;
	tail=temp; //or tail=tail->next
	}
}
void solve(ListNode*head1 ,ListNode*head2,ListNode*&head3,ListNode*&tail3,int carry)
{
    if(head1 == NULL && head2 ==NULL && carry ==0){
        return ;
    }

    int f = 0;
    int s = 0;

    if(head1!=NULL){
        f =head1->val;
    }
    if(head2!=NULL){
        s = head2->val;
    }

    int sum = f+s+carry;
    int last = sum%10;
    carry = sum/10;

    insertattail(head3,tail3,last);
      
      
    solve(head1 ==NULL?NULL: head1->next,head2 == NULL?NULL:head2->next,head3,tail3,carry); 

}

ListNode*rev(ListNode*& head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    ListNode*chota = rev(head->next);
  head->next->next = head;
  head->next= NULL;
  return chota;
}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode*head3 =NULL;
    ListNode*tail3 =head3;
    int carry =0;
      l1 = rev(l1);
      l2=rev(l2);
    solve  (l1,l2,head3,tail3,carry);

      head3 =  rev(head3);     
     
    return head3; 
    }
};