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


int main(){
	//create a new node
	Node*node1=new Node(10);
	//cout<<node1 -> data<<endl;
	//cout<<node1 ->next<<endl;
	
	//head pointed to node1
	Node*head=node1;
	Node*tail = node1;
	print(node1);

	insertattail(tail,12);

	insertattail(tail,15);
	print(head);
	
	insertatposition(tail,head,4,44);
	print(head);	
	
	cout<<"\nhead--> "<<head->data<<" "<<endl;
	cout<<"Tail--> "<<tail->data<<endl<<endl;
	
	deletenode(tail,head,4);
	print(head);
		cout<<"\nhead--> "<<head->data<<" "<<endl;
	cout<<"Tail--> "<<tail->data<<endl<<endl;
}





