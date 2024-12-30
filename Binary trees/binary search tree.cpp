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
Node* findmin(Node*root){
	if(root->left == NULL){
		return root;
	}
	return findmin(root->left);
}


Node* findmax(Node*root){
	if(root->right == NULL){
		return root;
	}
return 	findmax(root->right);
}

Node*deletefrombst(Node*root , int val){
	// base case
	
	if(root == NULL){
		return root;
	}
	
	if(root ->data == val){
		 
		 if(root->left == NULL && root->right == NULL){
		 	delete root;
		 	return NULL;
		 }
		 if (root->left==NULL && root->right!=NULL){
		 	Node*temp = root->right;
		 	delete root;
		 	return temp;
		 }
		 if(root->right ==NULL && root->left!=NULL){
		 	Node*temp = root->left;
		 	delete root;
		 	return temp;
		 }
		 if(root->left!=NULL && root->right!= NULL ){
		 	int mini = findmin(root->right)->data;
		 	root->data =mini;
		 	root->right = deletefrombst(root->right,mini);
		 	return root;
		 	
		 	 
		 }
		
	}
	else if(root->data >val){
          root->left = deletefrombst(root->left ,val);	
		  return root;	
	}
	else{
		root->right = deletefrombst(root->right ,val);
		return root;
	}
}


void  display (Node*root){
	if(root == NULL){
		return ;
	} 
	display(root->left);
	cout<<root->data<<"  ";
	display(root->right);

}





int main(){

 Node*root=NULL;
 cout<<" Enter data to create BST "<<endl;
 takeinput(root);
 cout<<endl<<" our bst --> ";
 display(root);
 
 cout<<endl<<" min value --> ";
 Node*temp =findmin(root);
 cout<<temp->data;
cout<<endl<<" max value --> ";
temp = findmax(root);
cout<<temp->data;

root = deletefrombst(root,30);

 display(root);
	return 0 ;
}
