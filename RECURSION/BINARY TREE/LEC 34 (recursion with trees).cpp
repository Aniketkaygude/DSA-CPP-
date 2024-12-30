#include<iostream>
using namespace std;

// reverse of string using recurrsion
/*
void reverse(string& name,int s,int e){
	
	//base case
	if(s>e){
   return ;
	}
		swap(name[s],name[e]);
	s++;
	e--;  
	
	//recursive call
	reverse(name,s,e);
}

int main(){

string name="Aniket";

int s=0;
int e=name.length()-1;
reverse(name,s,e);
cout<<name;
}
*/

/*
// check palindrome or not using recurrsion
bool checkpalindrome(string name,int s,int e){
	
	//base case
	if(s>e){
		return true;
	}
	
	if(name[s]!=name[e]){
		return false;
	}
	
	else{
		//recurssive call
		return checkpalindrome(name,s+1,e-1);
	}
}
int main(){
string name;
cout<<" enter your string--> ";
cin>>name;
int s=0;
int e=name.length()-1;
int ispalindrome =checkpalindrome(name,s,e);

if(ispalindrome){
	cout<<"\n palindrome";
}	
else{
	cout<<"\n not palindrome";
}	
}
*/


// power of digit
/*
int power(int a,int b){
	//base case
	if(b==0){
		return 1;
	}
	
	if(b==1){
		return a;
	}
  
 //recursive call
 int ans =power( a,b/2);
 
 //if b is even
 if(b%2==0){
 	return ans*ans;
 }
  if(b%2==1){
 	return a*ans*ans;
 }
}

int main(){
int a,b;
cin>>a>>b;
int ans=power(a,b);
cout<<endl<<"power is --> "<<ans;		
}
*/

void sort(int array[],int size){
	//base case
	if(size==1||size==1){
		return ;
	}
	
	for(int i=0;i<size-1;i++){
		if(array[i]>array[i+1]){
			swap(array[i],array[i+1]);
		}
	}
	
	sort(array,size-1);	
}

int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	sort(array,10);
	
	for(int i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
	
}






