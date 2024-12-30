#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Tnode{
	public:
		char data;
		Tnode*children[26];
		bool isterminal;
		
		Tnode(char ch){
			data  = ch;
			for(int i =0 ;i<26;i++){
				children[i] = NULL;
			}
			isterminal = false;
		}
};

class trie{
	public:
	
	Tnode* root;
	
	 trie(){
	 	root = new Tnode('\0');
	 }
	
	void insertutil(Tnode*root , string word){
		// base case
		
		if(word.length() == 0){
			root->isterminal = true;
			return;
		}
		
		// assumption , word will be in CAPS
		int index = word[0]-'A';
		Tnode*child;
		
		// present 
		if(root -> children[index]!=NULL){
			child = root->children[index];
		}
		else{
			//absent
			child = new Tnode(word[0]);
			root->children[index] = child;
		}
		
		// recursion
		insertutil(child , word.substr(1));
		
		
	}
	
	void insertword(string word){
		insertutil(root , word); 
	}	
	
	
	
	bool searchutil(Tnode* root , string word){
		// base case 
		if(word.size() == 0){
			 return root->isterminal;
		}
		
		int index = word[0]-'A';
		Tnode*child;
		
		// present 
		if(root->children[index]!=NULL){
			child = root->children[index];
		}
		else{
			// absent 
			return false;
		}
		
		return searchutil(child , word.substr(1));
	}
	
	bool search(string word){
		return searchutil(root , word);
	}
	
	
	
		
};

int main(){

  trie *t = new trie();
  t->insertword("ARM");
   t->insertword("DOM");
    t->insertword("TIME");
   
   cout<<"present or not --> "<<t->search("TIM")<<endl;
  
	return 0 ;
}
