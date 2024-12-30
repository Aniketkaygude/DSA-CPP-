
#include<iostream>
using namespace std;
/*
int main(){
	int size;
	cin>>size;
	
	//creating a 2d array
	
	int **arr=new int*[size];
	for(int i=0;i<size;i++){
		arr[i]=new int[size];
	}
	
	//taking input
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cin>>arr[i][j];
		}
	}
	
	//taking output
	cout<<endl<<endl;
		for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} */

int main(){
	cout<<"enter number of row"<<endl;
	int r;
	cin>>r;
	
	cout<<"enter number of columns"<<endl;
	int c;
	cin>>c;
cout<<endl<<endl;
// creting 2d array

int **arr=new int*[r];
for(int i=0;i<r;i++){
	arr[i]=new int[c];
}

//taking input 
cout<<"enter the elements of array"<<endl;
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>arr[i][j];
	}
}

cout<<endl<<"your array --> "<<endl<<endl;
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

//relesinng memory
for(int i=0;i<r;i++){
	delete []arr[i];
}
delete []arr;

	
}

