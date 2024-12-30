#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*prev;
		Node*next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
		
		~Node(){
			int value=this->data;
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"memory is free for node with data  "<<value<<endl;
		
		}
	
	
	
};

//displaying node
void print(Node *& head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//treaversing
void getlength(Node *& head){
	int cnt =0;
	Node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		cnt++;
	}
	cout<<"count of linked list "<<cnt;
}


void insertathead(Node *&head,int d){
	Node*temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	temp->prev=NULL;
	head=temp;
}


void insertattail(Node *&tail,int d){
	Node*temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	temp->next=NULL;
	tail=temp;
}



void insertatposition(Node*&head,Node*&tail,int position,int d){
	if(position==1){
		insertathead(head,d);
		return;
	}
	
	Node*temp=head;
	int cnt=1;
	while(cnt<position-1){
	temp=temp->next;
	cnt++;
	}
	
	if(temp->next==NULL){
		insertattail(tail,d);
		return;
	}
	
	//create node
	Node*nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
	

}


void deletenode(Node*&tail, Node*&head,int position){
	if(position==1){
		Node*temp=head;
		head=head->next;
		temp->next->prev=NULL;
		temp->next=NULL;
		delete temp;
	}
	
	else{
		
		Node*curr=head;
		Node*previous=NULL;
		int cnt=1;
		while(cnt<position){
			previous=curr;
			curr=curr->next;
			cnt++;
		}
		
		//pointing tail
		if(curr->next==NULL){
			tail=previous;
		}
		
		previous->next=curr->next;
		curr->next=NULL;
		curr->prev=NULL;
		delete curr;
				
	}
	
}


int main(){
	
	Node *node1=new Node(10);
	Node*head=node1;
	Node*tail=node1;
	
	insertathead(head,9);
	insertathead(head,8);
	print(head);
	insertattail(tail,12);
	insertattail(tail,13);
	print(head);
	insertatposition(head,tail,4,11);
  print(head);
  
  deletenode(tail,head,6);
  
//	getlength(head);
	
}
























