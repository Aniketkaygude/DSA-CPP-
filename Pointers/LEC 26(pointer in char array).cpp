#include<iostream>
using namespace std;
	/*
int main(){

	int arr[6]={1,2,3,4,5,6};
	char ch[5]="abcd";
	
	cout<<arr<<endl;
	cout<<ch<<endl<<endl<<endl;
	
	char *c=&ch[0];
	//prints entire array
	cout<<c<<endl;
	cout<<*c<<endl;
	*/
	

// 	FUNCTIONS AND POINTERS

void print(int *p){
	
	cout<<"address-->"<<p<<endl;
	cout<<"value-->"<<*p<<endl;
	
}

void update(int *p){
// pass by value
*p=*p+1;
 }

int sum(int *array,int size){
	cout<<"size:=>"<<sizeof(array)<<endl;
	
	int count=0;
	for(int i=0;i<size;i++){
		count+=array[i];
	}
	return count;
}

int main(){
/*	
	int value=52;
	int *p=&value;
	
	cout<<"before-->"<<*p<<endl;
    update(p);
	cout<<"after-->"<<*p<<endl;	
	*/

int array[5]={1,6,3,40,50};
cout<<sum(array,5)<<endl;

	
	
}
 


	
	
 