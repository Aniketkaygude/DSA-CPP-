#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Node{
	public:
		
		Node*left;
		Node*right;
		int data;
		
		Node(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};


Node* insertintobst(Node*root,int data){

	if(root == NULL){
	    root = new Node(data);
	    return root;
	}
	
	if(root->data <data){
		root->right = insertintobst(root->right,data);
	}
	else{
			root->left = insertintobst(root->left,data);
	}
	return root;

   
		
		
	
}

void takeinput(Node*& root){
	 
	 int data;
	 cin>>data;
	 
	 while(data!=-1){
	 root =	insertintobst(root ,data);
	 	cin>>data;
	 }
}

void  display (Node*root){
	if(root == NULL){
		return ;
	} 
	display(root->left);
	cout<<root->data<<" ";
	display(root->right);

}

int  inordersuccessor(Node*root , int target){
	int successor = -1;
	
	while(root!=NULL){
		if(root->data  < target){
			 root = root->right;
			
		}
		else{
			successor = root->data;
			root = root->left;
		}
	}
	return successor;
}
int  inorderpredecessor(Node*root , int target){
	int predecessor = -1;
	
	while(root!=NULL){
		if(root->data  >= target){
			 root = root->left;
			
		}
		else{
			predecessor = root->data;
			root = root->right;
		}
	}
	return predecessor;
}

int main(){

Node*root=NULL;
 cout<<" Enter data to create BST "<<endl;
 takeinput(root);
 cout<<endl<<" our bst --> ";
 display(root);
 
 cout<<endl<<"Predeccesor --> "<<inorderpredecessor(root,8);
 cout<<endl<<"succesor --> "<<inordersuccessor(root,9);
 

	return 0 ;
}
