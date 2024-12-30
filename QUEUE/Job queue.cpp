#include<iostream>
using namespace std;

class job{
	public:
	int size,front,rear;
	int *arr;
	
	job(int size){
		this->size=size;
		rear=front=0;
		arr=new int[size];
	}
	
	void add(int num){
		if(rear==size){
			cout<<"cannot insert the job"<<endl<<endl;
		}
		else{
			arr[rear]=num;
			rear++;
			cout<<"the job number "<<num<<" is added "<<endl<<endl;
		}
	}
	
	void delet(){
		if(front==rear){
			cout<<"queue underflow"<<endl<<endl;
		}
		   
		else{
			cout<<"job number "<<arr[front]<<" is deleted"<<endl<<endl;

			arr[front]=-1;
			front++;
			if(front==rear){
				rear=front=0;
			}
		}
	}
	
		void display(){
		if(front==rear){
			cout<<"queue has no  job"<<endl<<endl;
		}
		
		else{
			for(int i=front;i<rear;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
	
};

int main(){
	job j(5);
	
	int loop=0;
	while(loop==0){
	cout<<"1 = ADD JOB"<<endl;	
	cout<<"2 = DELETE JOB"<<endl;	
	cout<<"3 = DISPLAY JOB"<<endl;
	cout<<"4 = EXIT"<<endl<<endl;	
	int choice;
	cout<<"enter the choice ";
	cin>>choice;
	
	switch(choice){
		case 1:{
			cout<<"\nenter job number ";
			int num;
			cin>>num;
			j.add(num);
			break;
		}
		
		case 2:{	
		j.delet();
		break;
		}
		
		case 3:{
			cout<<"\njobs are-> ";
			j.display();
			break;
		}
		
		case 4:{
			loop++;
			cout<<"-----program ended---";
			break;
		}
	}
	
	
	
	}
	
	
	
	
}