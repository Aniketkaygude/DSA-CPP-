#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
	node(int d){
		this->data=d;
		this->left=NULL;
		this->right-NULL;
	}	
};
node* buildTree(node* root){
	cout<<"enter the data --> "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	return root;
}


void levelorderTraversal(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node*temp=q.front();
		q.pop();
		
		if(temp==NULL){
			// old or previous level is completed
			cout<<endl;
			if(!q.empty()){
				// queue still has some child nodes
				q.push(NULL);
			}
		}
		
		else{
			cout<<" "<<temp->data <<"";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}	
	}
}

void inorder(node*root){
	if(root==NULL){
		return;
	}
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	
}

void preorder(node*root){
	if(root==NULL){
		return;
			}
			
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node*root){
	if(root==NULL){
		return;
	}
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void  buildfromlevelorder(node*&root){
	queue<node*> q;
	cout<<"enter the data for root "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	q.push(root);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"Enter left node for --> "<<temp->data<<endl;
		int leftdata;
		cin>>leftdata;
		
		if(leftdata!= -1){
			temp->left =new node(leftdata);
			q.push(temp->left);
		}
		
		cout<<"Enter right node for --> "<<temp->data<<endl;
		int rightdata;
		cin>>rightdata;
		
		if(rightdata!= -1){
			temp->left =new node(rightdata);
			q.push(temp->left);
		}
	}
	
	
}  

int main(){

node *root=NULL;
	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
/*	// creating a tree
	root=buildTree(root);

//level order trafersal
levelorderTraversal(root);


//inorder traversal
cout<<"inorder traversal --> ";
inorder(root);


// preorder traversal
cout<<"\npreorder traversal --> ";
preorder(root);


//postorder traversal
cout<<"\npostorder traversal --> ";
postorder(root);
*/
//buildfromlevelorder

buildfromlevelorder(root);
levelorderTraversal(root);
}




