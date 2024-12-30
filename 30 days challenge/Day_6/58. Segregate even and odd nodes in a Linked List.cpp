class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node*even=new Node(-1);
        Node*e_tail=even;
        
        Node*odd =new Node(-1);
        Node*o_tail= odd;
        
        while(head!=NULL){
            Node*temp = new Node(head->data);
            if(head->data%2 == 0){
                e_tail->next=temp;
                e_tail = temp;
            }
            else{
                o_tail->next=temp;
                o_tail = temp;
            }
            head=head->next;
        }
        
        e_tail->next=odd->next;
        
        return even->next;
        
        
    }
};