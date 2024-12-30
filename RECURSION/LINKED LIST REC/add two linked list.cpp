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

void insertattail(Node*&tail,Node*&head ,int d){
	//New node create\
	 
	 if(head == NULL ){
	 	head = new Node(d);
	 	tail =head;
	 	return ;
	 }
	else{
		Node*temp=new Node(d);
	tail->next=temp;
	tail=temp; //or tail=tail->next
	}


}


void print(Node*&head){
	Node*temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


void add(Node*head1,Node*head2,Node*&head3,Node*&tail3 ,int carry){
	
	if(head1 == NULL && head2 == NULL && carry  == 0){
		return ;
	}
	
	int first  =0;
	int second = 0;
	
	if(head1!=NULL){
		first = head1->data;
	}
	if(head2!=NULL){
		second = head2->data;
	}
	
	int sum = first+second+carry;
	int last = sum%10;
	carry = sum/10;
	
	insertattail(tail3,head3,last);
	
	add(head1->next,head2->next,head3,tail3,carry);
	
	
}


int main(){

Node*head1  = new Node(1);
Node*tail1 = head1;	

insertattail(tail1,head1 ,0);
insertattail(tail1,head1 ,0);

cout<<"linked list 1 -->  ";
print(head1);

Node*head2  = new Node(2);
Node*tail2 = head2;
insertattail(tail2,head2 ,0);
insertattail(tail2,head2 ,0);	

cout<<"linked list 2 -->  ";
print(head2);

Node*head3 = NULL;
Node*tail3 = head3;
int carry = 0;

add(head1 ,head2,head3,tail3,carry);
cout<<"linked list answer -->  ";
print(head3);
}









