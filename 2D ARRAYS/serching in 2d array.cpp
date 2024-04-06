#include<iostream>
using namespace std;
//searching in 2d array

/*
ispresent(int array[][4],int key,int row,int col ){
	int f=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(array[i][j]==key){
				cout<<"student is present "<<endl;
				f=1;
				break;
			}
		}
	}
	if(f==0){
		cout<<"student is absent ";
	}
}

int main(){

int array[3][4];
cout<<"enter roll number of students --> "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cin>>array[i][j];
	}
	cout<<endl;
}

cout<<endl<<endl<<"your array --> "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<array[i][j]<<" ";
	}
	cout<<endl;
}
int key;
cout<<endl<<endl<<"ENTER ROLL NUMBER TO FIND --> ";
cin>>key;
 ispresent(array,key,3,4);
return 0;
} */

// OR OR OR OR OR OR OR OR OR OR  OR OR OR 




ispresent(int array[][4],int key,int row,int col ){
	int f=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(array[i][j]==key){
			return 1;
			}
		}
		return 0;		
}
}
int main(){

int array[3][4];
cout<<"enter roll number of students --> "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cin>>array[i][j];
	}
	cout<<endl;
}

cout<<endl<<endl<<"your array --> "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<array[i][j]<<" ";
	}
	cout<<endl;
}
int key;
cout<<endl<<endl<<"ENTER ROLL NUMBER TO FIND --> ";
cin>>key;
if( ispresent(array,key,3,4)){
	cout<<"present ";
}
else{
	cout<<"not";
}
}


