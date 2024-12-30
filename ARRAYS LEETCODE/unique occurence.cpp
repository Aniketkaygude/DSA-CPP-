#include<iostream>
using namespace std;


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
	int ans=0;
	for(int i=0;i<size;i++){
	   ans =ans^arr[i];}
		 for(int j=0;j<size;j++){
		  ans=ans^j;
	}
	
	cout<<"unique --> "<<ans;
}






