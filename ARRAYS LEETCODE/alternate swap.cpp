#include<iostream>
using namespace std;


int main(){
	
int arr[100]={0};
cout<<"enter the size of  array => ";
int size;
cin>>size;
cout<<"\n enter the array elements-> ";
for(int i=0;i<size;i++){
	cin>>arr[i];
}

cout<<"\n your entered array --> ";
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<size;i=i+2){
	int j=i+1;
	if(j<size){
	
		swap(arr[i],arr[j]);
	}
	j=j+1;
	
}

cout<<"\narray after alternate swaping --> ";
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}

	
	
}

