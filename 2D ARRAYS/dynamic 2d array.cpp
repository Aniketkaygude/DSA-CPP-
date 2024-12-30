#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	cout<<"enter the row --> ";
	int row;
	cin>>row;
	
		cout<<"\n enter the col --> ";
		int col;
		cin>>col; 
	
	int **arr = new int*[row];
	
	for(int i =0 ;i<row ;i++){
		arr[i] = new int[col];
	}
	
	cout<<"enter the array elements --> "<<endl;
	
	for(int i = 0 ;i<row ;i++){
	
	for(int j = 0 ;j<col ; j++){
		cin>>arr[i][j];
	}
}

cout<<"\n \n your array --> "<<endl;
	for(int i = 0 ;i<row ;i++){
	
	for(int j = 0 ;j<col ; j++){
		cout<<arr[i][j]<< "  ";
	}
	cout<<endl;
}

// relesing memory
for(int i = 0 ; i<row; i++){
	delete []arr[i];
	cout<<"memory no " <<i+1<<" released "<<endl;
}

delete [] arr;

	return 0 ;
}
