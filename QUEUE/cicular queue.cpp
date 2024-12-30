#include<iostream>
using namespace std;
/*
class cqueue{
	public:
	int front,size,rear;
	int *arr;
	
	cqueue(int size){
		this->size=size;
		front=rear=-1;
		arr=new int[size];
	}	
	
 void enqueue(int num){
 	if((front==0&&rear==size-1)||(rear==front-1)%(size-1)){
 		cout<<"queue if full"<<endl;
	 }
	 
	 else if(front==-1)  //first element to push
	 {
	 front=	rear=0; 
	 	
	 }
	 
	 else if(rear==size-1&&front!=0)//to maintain cyclic nature
	 {
	 	rear=0;
	 		
	 }
	 else{
	 	rear++;
	 }
	 //push inside the queue
	 arr[rear]=num;	 
 }		
 
 // dequeue
 
  void dequeue(){
  	if(front==-1){
  		cout<<"queue is underflow empty"<<endl;
	  }
	  
  	if(front==rear){
  		front=rear=-1;
	  }
	  else if(front==size-1){
	  	front=0;//maintain cyclic naturee
	  }
	  
	  else {
	  	front++;
	  }
  } 
  
  void displayCQ() {
     if (front == -1) 
    { 
      cout<<("\nQueue is Empty"); 
        return; 
    } 
    cout<<("\nElements in Circular Queue are: "); 
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            cout<<arr[i]<<" "; 
    } 
    else
    { 
        for (int i = front; i < size; i++) 
            cout<<arr[i]<<" ";
  
        for (int i = 0; i <= rear; i++) 
            cout<<arr[i]<<" ";
    } 
}	
};
   
int main(){
	cqueue q(5);
	q.enqueue(12);
		q.enqueue(13);
		q.enqueue(13);
		q.enqueue(22);
		q.enqueue(22);
		q.dequeue();
		q.dequeue();
		q.dequeue();
		q.dequeue();
		q.dequeue();
		q.dequeue();
q.displayCQ();
} */

class cq{
	public:
	int front,rear,size;
	int *arr;
	
	cq(int size){
		this->size=size;
		front=rear=-1;
		arr=new int[size];
	}	
	
	void enqueue(int num){
	if((front==0 && rear==size-1)||(rear==front-1)%(size-1)){
		cout<<"orders are full"<<endl;
	}	
	
	else if(front==-1) // first element 
	{
		front=rear=0;
	}
	else if(front!=0 && rear==size-1) // maintain cyclic nature
	{
		rear=0;
	}
	else {
	rear++;
	} 
	arr[rear]=num;
}

void dequeue(){
	if(front==-1){
		cout<<"all orders are served "<<endl;
		return;
	}
	cout<<"order is served: "<<arr[front]<<endl;
	 if(front==rear){
		front=rear=-1;
	}
	
	else if(front==size-1){
		front=0;
	}
	
	else{
		front++;
	}
}

void display(){
if(front==-1){
	cout<<"orders are empty"<<endl;
	return;
}
cout<<"orders are -> ";
if(rear>=front){
	for(int i=front;i<=rear;i++){
		cout<<arr[i]<<" ";
	}
}

else{
	for(int i=front;i<size;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<=rear;i++){
		cout<<arr[i]<<" ";
	}
}
}
};

int main(){
	cq q(5);

int loop =0;

while(loop==0){
cout<<"\n1->  ADD PIZZA ";
cout<<"\n2-> SERVE PIZZA  ";	
cout<<"\n3->  DISPLAY ORDERS ";
cout<<"\n4->  EXIT ";	
int choice;
cout<<"\nenter the choices --> ";
cin>>choice;
cout<<endl<<endl;

switch(choice){
	
	case 1:{
		char c='y';
		while(c=='y'||c=='Y'){
			int n;
			cout<<"enter order id-> ";
			cin>>n;
			q.enqueue(n);
			cout<<"do you want to add another one y/n-> ";
			cin>>c;
		}
		
		break;
	}
	
	case 2 :{
		q.dequeue();
		break;
	}
	
	case 3:{
		q.display();
		break;
	}
	case 4:{
		loop++;
		cout<<"--------program is ended-----";
		break;
	}	
}	
}
}
