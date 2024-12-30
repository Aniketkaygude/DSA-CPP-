#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
	public:
	int*arr;
	int size;
	int front;
	int rear;
	
	Queue(int size){
		this->size=size;
		arr=new int[size];
		front =-1;
		cout<<" queue of size "<<size <<" is created "<<endl; 
		rear=0;
	}
	
	void push(int data){
		if(rear<size){
			arr[rear]=data;
			rear++;
			cout<< data<< " is inserted "<<endl;
		}
		else{
			cout<<" queue overflow "<<endl;
		}
	}
	
	bool isempty(){
		if(front == rear){
			cout<<" queue is empty "<<endl;	
			return 1;
		}
		else{
			cout<<" queue is not empty "<<endl;
		return false;
		}
	}
	
	void isfull(){
		if(rear >= size && front  == -1){
			cout<<"queue is full "<<endl;
		}
		else{
			cout<<" queue is not full "<<endl;
		}
	}
	
	void pop(){
		if(front+1 < size && front < rear){
			front++;
			cout<<" element "<<arr[front]<<" removed "<<endl;  
			arr[front]=-1;	
		}else{
			cout<<" queue is empty "<<endl;
		} 
	}
	
	void display(){
	  
	  if(!isempty()) 
	{ 
	cout<<endl;
	  for(int i= front+1;i<rear;i++){
	  	cout<<arr[i]<<" ";
	  } 
	  cout<<endl;
	  }	
		
	}
	
	
	
	
};


int main(){

 int loop = 1;
 Queue *q=NULL;
 while( loop==1 ){
  	
 	cout<<"\n\n 1. Create New new of queue --> "<<endl;
 	cout<<" 2. push element in  queue --> "<<endl;
 	cout<<" 3. pop element out of the queue --> "<<endl;
 	cout<<" 4. Check if the queue  is empty or not --> "<<endl;
 	cout<<" 5. Check if the queue  is full or not "<<endl;
 	cout<<" 6. Display queue elements  --> "<<endl;
 	cout<<" 7.  exit                          "<<endl<<endl;
 	
 	cout<<" Enter the choice "<<endl;
 	int choice;
 	cin>>choice;
 	
 	switch(choice){
 		case 1:{
 			int n=0;
 			cout<<"Enter the size of queue --> ";
 			cin>>n;
 		    q = new Queue(n);
			break;
		 }
		 
		 case 2:{
		 	cout<<"enter the element --> ";
		 	int n=0;
		 	cin>>n;
		 	q->push(n);
			break;
		 }
		 case 3:{
		 	if(q== NULL ){
		 		cout<<"NIGGA create the queue  "<<endl;
		 		break;
			 }
		 	q->pop();
			break;
		 }
		 
		 case 4:{
		 	q->isempty();
		 	
			break;
		 }
		 
		 case 5:{
		 	q->isfull();
			break;
		 }
		 
		 case 6:{
		 	cout<<endl<<endl;
		 	q->display();
			break;
		 }
		 
		 case 7:{
		 	cout<<" Program ended "<<endl;
		 	loop++;
			break;
		 }
	 }
 	

 }




return 0;
}
