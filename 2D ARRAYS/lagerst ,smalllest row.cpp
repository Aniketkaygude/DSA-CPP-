#include<iostream>
using namespace std;

void findlargestrow(int array[][3],int row ,int coloumn){
	int rowindex=-1;
	int max=INT_MIN;
	for(int row=0;row<4;row++){
		int sum=0;
		for(int coloumn=0;coloumn<3;coloumn++){
			sum+=array[row][coloumn];
		}
		
		if(sum>max){
			max=sum;
			rowindex=row;	
		}
	}
	cout<<"lagest row is --> "<<rowindex;
}

void findlargestcoloumn(int array[][3],int row ,int coloumn){
	int rowindex=-1;
	int max=INT_MIN;
	for(int coloumn=0;coloumn<3;coloumn++){
		int sum=0;
		for(int row=0;row<3;row++){
			sum+=array[row][coloumn];
		}
		
		if(sum>max){
			max=sum;
			rowindex=coloumn;	
		}
	}
	cout<<"lagest coloumn is --> "<<rowindex;
}


int main(){

int array[4][3];
cout<<"ENTER YOUR ARRAY ELEMENTS --> "<<endl;
for(int row=0;row<4;row++){
	for(int coloumn=0;coloumn<3;coloumn++){
	cin>>array[row][coloumn];
	
	}
}

cout<<"YOU  2D ARRAY --> "<<endl<<endl;
for(int row=0;row<4;row++){
	for(int coloumn=0;coloumn<3;coloumn++){
		cout<<array[row][coloumn]<<" ";
	}
	cout<<endl;
}

//findlargestrow(array,4,3);
findlargestcoloumn(array,4,3);
}

