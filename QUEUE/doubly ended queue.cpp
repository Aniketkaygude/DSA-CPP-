#include<iostream>
using namespace std;

class dqueue{
	
	int *arr;
	int front,rear,size;
	public:
	dqueue(int size){
		this->size=size;
		front=rear=-1;
		arr=new int[size];
	}
	
	void pushfront(int num){
		if((front==0 && rear==size-1)||(rear==front-1)%size-1){
			cout<<"DE queue is empty"<<endl;
		}
		
		else if(front==-1){
			front =rear=0;
		}
		else if(front==0 &&rear!=size-1){
			front=size-1;
		}
		else {
			front --;
		}
		arr[front]=num;
	}
	
	void pushrear(int num ){
		if((front==0 && rear==size-1)||(rear==front-1)%size-1){
			cout<<"stack is empty"<<endl;
		}
		
		else if(front==-1){
			rear=front =0;
		}
		
		else if(rear==size-1&&front!=0){
			rear=0;
		}
		
		else{
			rear++;
		}
		
		arr[rear]=num;
	}
	
	void popfromt(){
		if(front==-1){
			cout<<"stack is empty"<<endl;
		}
		
		else if(front==rear){
			front=rear=-1;
		}
		else if(front==size-1){
			front=0;
		}
		
		else{
			front++;
		}
	}
	
	void poprear(){
		if(front==-1){
			cout<<"stack is empty"<<endl;
		}
			else if(front==rear){
			front=rear=-1;
		}
		else if(rear==0){
			rear=size-1;
		}
		else{
			rear--;
		}	
	}
	
	int getfront(){
		if(isempty()){
			cout<<"empty"<<endl; 
		}
		else{
		return arr[front];
		}
	}
	
	int getrear(){
		if(isempty()){
			cout<<"empty"<<endl; 
		}
		else{
		return arr[rear];
		}	
	}
	
	int  isempty(){
		if(front==-1){
			cout<<"queue is  empty"<<endl;
			return true;
		}
		else{
			cout<<"not empty"<<endl;
			return false;
		}
	}
	
	void isfull(){
		if((front==0&&rear==size-1)||(front!=0&&rear==front-1)%size-1){
			cout<<"queue if full"<<endl;
		}
		
		else{
			cout<<"not full"<<endl;
		}
	}
	
	
	
	
};

int main(){
	dqueue(10);
}