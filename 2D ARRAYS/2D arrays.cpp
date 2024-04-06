#include<iostream>
using namespace std;
/*
//type 1 of declering array
int main(){

int array2[3][4];
//coloumn wise input 
for(int col=0;col<4;col++){
	for(int row=0;row<3;row++){
		cin>>array2[row][col];
	}
}
for(int row=0;row<3;row++){
	for(int col=0;col<4;col++){
		cout<<array2[row][col]<<" ";
	}
	cout<<endl;
}

return 0;
}
*/

int main(){

int array1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

for(int row=0;row<3;row++){
	for(int col=0;col<4;col++){
		cout<<array1[row][col]<<" ";
	}
	cout<<endl;
	
}
cout<<endl<<endl;
int array2[4][3]={ {1,2,4}  , {5,6,7},  {8,9,10},  {11,12,13} };

for(int row=0;row<4;row++){
	for(int col=0;col<3;col++){
		cout<<array2[row][col]<<" ";
	}
	cout<<endl;}
}
