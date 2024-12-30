#include<iostream>
using namespace std;

int main(){
	int key , num, size;
	cout<<"enter the size of array -> ";
	cin>>size;
	
	int arr[100]={0};
	cout<<" array elements before hashing -> ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
		cout<<endl<<"\n enter 5 element -> ";
	for(int i=0;i<size;i++){
	cin>>num;
    key=num%size;
    
    if(arr[key]>0){
    	while(arr[key]!=0)
    	key++;
	}
	if(key==size ){
		key=0;
		//arr[key]=num;
		while(arr[key]!=0)
    	key++;
	 
		}	
			arr[key]=num;
	}
	cout<<" array elements after hashing -> ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}




