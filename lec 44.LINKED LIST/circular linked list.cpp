#include<iostream>
using namespace std;


class Node{
public:
	Node*next;
	int data;
	
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
	
	~Node(){
		int value=this->data;
		if(this->next!=NULL){
			delete next;
			this->next=NULL;
		}
		cout<<"value with node value "<<value<<" freed"<<endl;
	}

};
void insertnode(Node*&tail,int element ,int d){
	// assuming that the element is present in the list
	if(tail==NULL){
		Node* temp=new Node(d);
		tail=temp;
		temp->next=temp;
	}
	
	else{
		//non - empty list
		//assuming that the element is present in the list
	
	Node*curr=tail;
	while(curr->data!=element){
		curr=curr->next;
	}
	
	//create Node
	Node*nodetoinsert=new Node(d);
	nodetoinsert->next=curr->next;
	curr->next=nodetoinsert;
	
		
	}
}







int main(){
	
	Node *tail=NULL;
insertnode(tail,5,3);	


}





















































































