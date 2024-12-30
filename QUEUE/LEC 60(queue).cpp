#include<iostream>
using namespace std;

class queue{
	public:
		int size,rear,qfront;
		int *arr;
		
		queue(int size){
		this->size=size;
			arr=new int[size];
			qfront=0;
			rear=0;
		}
		
	void enqueue(int num){
		if(rear==size){
		cout<<"queue is full"<<endl;	
		}
		else{
		arr[rear]=num;
			rear++;
		}
	}	
	
	int dequeue(){
		if(qfront==rear){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		else{
			arr[qfront]=-1;
			qfront ++;
			if(qfront==rear){
				qfront=0;
				rear=0;
			}
		}
	}
	
	int front(){
		
		if(qfront==rear){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		else{
			return arr[qfront];
		}
	}
	
	void empty(){
		if(qfront==rear){
			cout<<"queue is empty"<<endl;
		}
		else{
			cout<<"queue is not empty"<<endl;
		}
	}
	
	void display(){
		if(qfront==rear){
			cout<<"queue has no  element"<<endl;
		}
		else{
			for(int i=qfront;i<rear;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
		
		
		
};

int main(){
	queue q(5);
	q.enqueue(12);
	q.enqueue(13);
		q.enqueue(14);
			q.enqueue(15);
				q.enqueue(16);
				
	
q.display();

}