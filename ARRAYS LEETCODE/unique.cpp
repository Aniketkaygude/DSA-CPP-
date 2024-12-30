#include<iostream>
using namespace std;


/*
int main(){
	int arr[100]={0};
	int size,count,check=0;
	cout<<"\nenter the size of array--> ";
	cin>>size;
	cout<<endl;
	cout<<"\n enter the elements of an array--> ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	
	for(int i=0;i<size;i++){
		int j=0;
		count=0;
		while(j<size){
			
			if(arr[i]==arr[j]){
				count=count+1;
			}
			j++;
		}
		
		 if(count==1){
			cout<<"unique element is --> "<<arr[i]<<endl;
			check=1;
		}		
		count=0;
		
	}
	if(check==0){
		cout<<"array has no unique element ";
	}
	
	}

*/

void unique(int arr[],int size){
	int ans=0;

	for(int i=0;i<size;i++){
		ans =ans^arr[i];	
	}
		cout<<"unique element is --> "<<ans<<endl;
}

int main(){
		int arr[100]={0};
	int size,count,check=0;
	cout<<"\nenter the size of array--> ";
	cin>>size;
	cout<<endl;
	cout<<"\n enter the elements of an array--> ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	unique(arr,size);
}





































