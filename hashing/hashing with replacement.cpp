#include<iostream>
using namespace std;

int main(){
	int  d=0;
	int element=0;
	int key=0;
    int arr[10]={0};
    
    cout<<"array before hashing -> ";
    for(int i=0;i<10;i++){
    	cout<<arr[i]<<" ";
	}
	
	cout<<endl<<endl;
	
	for(int i=0;i<10;i++){
		cout<<"enter the element --> ";
		cin>>element;
				
				
		key=element%10;
        int j=arr[key];

		if(arr[key]>0 && j%10==key ){
			while(arr[key]!=0){
				key++;
			}
		}
		
		if(key>=10){
		key=0;
	}
		
		if(arr[key]>0 && j%10!=key){
			
			arr[key]=element;
			while(arr[key]!=0){
				key++;
			}
			arr[key]=j;
			d++;
		}
			
	if(d==0){
		arr[key]=element;
	}	
	d=0;
}

	cout<<"\narray of elements after hashing --> ";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}	
}


















