#include<iostream>
using namespace std;

/*
void update2(int& a){
	a++;
}

void update(int a){
	a++;
}

int main(){

	int i=52;
	
// creating refrence variable
int & j=i;
cout<<j<<"  "<<i<<endl;
cout<<j++<<" "<<i<<endl;
cout<<j++<<" "<<i<<endl;

cout<<"value of i-->"<<i<<"\nvalue of j-->"<<j<<endl;



int a=1;
cout<<"-----WITHOUT PASSING REFRENCE-----"<<endl<<endl;
cout<<"before--> "<<a<<endl;
update(a);
cout<<"after--> "<<a<<endl;
cout<<"This is called pass by value,in which new memory is created"<<endl<<endl;

cout<<"----WITH PASSING REFRENCE---"<<endl<<endl;
cout<<"before--> "<<a<<endl;
update2(a);
cout<<"after--> "<<a<<endl;
cout<<"this is called pass by refrence.in which no new memory is creted."<<endl;
}
*/


// static vs dynamic memory allocation 

int count(int *arr,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	cout<<"Enter the size of array --> "<<endl;
	int size;
	cin>>size;
	
	int*  arr=new int[size];
	
for(int i=0;i<size;i++){
	cin>>arr[i];
}

int ans=count(arr,size);
cout<<"sum is --> "<<ans;
	
}












