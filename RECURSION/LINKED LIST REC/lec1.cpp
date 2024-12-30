#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#include<iostream>
using namespace std;

class Node 
{
	public:
		int data;
		Node *next;
	
	//constructor
	Node(int data){
		this->data=data;
		this->next=NULL;
		}
		
	//destructor
	~Node(){
		int value=this->data;
		//memory free
		if(this->next!=NULL){
			delete next;
			this-> next=NULL;
		}
		cout<<"memory is free for node with data"<<value<<endl;
	}	
		
		
};

void insertathead(Node* &head,int d){
	// new node create
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

void insertattail(Node*&tail,int d){
	//New node create
	Node*temp=new Node(d);
	tail->next=temp;
	tail=temp; //or tail=tail->next
}


void print(Node*&head){
	Node*temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

//insert at middle
void insertatposition(Node*&tail, Node*&head ,int position,int d)
{
	//insert at biginning
	if(position==1){
		insertathead(head,d);
		return ;
	}
		
Node*temp=head;
int cnt=1;
while(cnt<position-1){
	temp=temp->next;
	cnt++;
}	

// insert at last position
if(temp->next==NULL){
	insertattail(tail,d);
	return;
}

//creating NOde for d
Node*nodetoinsert=new Node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;	
}

void deletenode(Node*&tail,Node*& head,int position){
	//deleting first or start node
	if(position==1){
		Node*temp=head;
		head=head->next;
		//memory free start node
		temp->next=NULL;
		delete temp;
	}
	
	else{
		//deleting any middle node or last node
		Node*curr=head;
		Node*prev=NULL;
	
		int cnt=1;
		while(cnt<position){
			prev=curr;
			curr=curr->next;
			cnt++;
		}
		//pointing tail to the last element
        if(curr->next == NULL){
            tail=prev;
        }
		
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
		
	}
}

void deletevalue(Node*& tail, Node*& head, int value){
    
    Node*curr = head;
    Node*prev = NULL;
    int cnt = 1;
    
    while(curr!=NULL && curr->data != value ){
        prev = curr;
        curr=curr->next;
    }
    
    if(curr==NULL){
        cout<<" value not found to delete "<<endl;
        return;
    }
    
    if(prev == NULL){
        head = curr->next;
        return;
    }
    else{
        prev->next = curr->next;
    }
    
    if(curr->next == NULL){
        tail = prev;
    }
    
    curr->next =NULL;
    delete curr;
}


void Recprint(Node*root){
	
	if(root == NULL){
		return ;
	}
	
	cout<<root->data<<" ";
	Recprint(root->next);
	
}

void kthnodefromend(Node*head,int& k){
		
    if(head == NULL){
    	cout<<"\nk is greater than Linked List"<<endl;
        return ;
    } 
     
    kthnodefromend(head->next,k);
    
    k--;
    if(k == 0){
           cout<<"Kth node from last -->"<<head->data<<" "<<endl;
           return ;
    }

}

Node*reverse(Node*head){
	
	if(head==NULL || head->next==NULL){
		return head;
	}
	
	Node*chotahead = reverse(head->next);
	head->next->next=head;
	head->next =NULL;
	return chotahead;
}


     Node* reverseKGroup(Node* head, int k) {
            
            if(head == NULL){
                return NULL;
            }
            
            Node* prev =NULL;
            Node*curr = head;
            Node*next=NULL;
            int cnt =0;
             
            Node*temp=head;

            while(temp!=NULL && cnt<k){
               cnt++;
               temp=temp->next;
            } 

            if(cnt<k){
                return head;
            } 

            while(curr!=NULL && cnt>0){
                next = curr->next;
                curr->next =prev;
                prev = curr;
                curr = next;
                cnt--;
            }
           
           
           if(next != NULL){
                head->next = reverseKGroup(next,k);
            }
           
            
            return prev;




    }


int main(){

Node*root = new Node(10);
Node*head = root;
Node*tail = root;

insertattail(tail ,11);
insertattail(tail ,12);
insertattail(tail ,13);
insertattail(tail ,14);
insertattail(tail ,15);
print(head);
cout<<endl<<endl;

cout<<"printing through recursion --> ";
Recprint(head);

cout<<endl;
int k =7;
//kthnodefromend(head,k);

cout<<"reverse ll --> ";
head = reverse(head);
Recprint(head);
cout<<endl<<endl;
head = reverse(head);
Recprint(head);
	return 0 ;
}
