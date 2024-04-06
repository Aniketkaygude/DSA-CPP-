#include<iostream>
using namespace std;

/*
void opertions(int array[][3],int row ,int col){
	cout<<endl<<endl<<"row wise addition --> "<<endl;

for(int i=0 ;i<3;i++){
	int sum=0;
	for(int j=0;j<3;j++){
 sum=sum+array[i][j];
	}
	
	cout<<sum<<endl;
}
cout<<endl<<endl<<"coloumn wise addition --> "<<endl;

for(int i=0 ;i<3;i++){
	int sum=0;
	for(int j=0;j<3;j++){
 sum=sum+array[j][i];
	}
	
	cout<<sum<<endl;
}

cout<<endl<<endl<<" row wise mutiplication wise addition --> "<<endl;

for(int i=0 ;i<3;i++){
	int sum=1;
	for(int j=0;j<3;j++){
 sum=sum*array[i][j];
	}
	
	cout<<sum<<endl;
}
cout<<endl<<endl<<" coloumn wise mutiplication wise addition --> "<<endl;

for(int i=0 ;i<3;i++){
	int sum=1;
	for(int j=0;j<3;j++){
 sum=sum*array[j][i];
	}
	
	cout<<sum<<endl;
}

cout<<endl<<endl<<" row wise subtraction wise addition --> "<<endl;

for(int i=0 ;i<3;i++){
	int sum=0;
	for(int j=0;j<3;j++){
 sum=sum-array[i][j];
	}
	
	cout<<sum<<endl;
}
cout<<endl<<endl<<" coloumn wise subtraction wise addition --> "<<endl;

for(int i=0 ;i<3;i++){
	int sum=0;
	for(int j=0;j<3;j++){
 sum=sum-array[j][i];
	}
	
	cout<<sum<<endl;

}
}
int main(){
 
int array[3][3];
cout<<"ENTER YOUR ARRAY ELEMENTS --> "<<endl;
for(int i=0 ;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>array[i][j];
	}
}

cout<<endl<<endl<<"your 2d array--> "<<endl;
for(int i=0 ;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<array[i][j]<<" ";
	}
	cout<<endl;
}

opertions(array,3,3);


return 0;
}

*/

class operations{
	
	public:
	
void add(int arr1[3][3],int arr2[3][3]){
	cout<<"addition of matrix are-> "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}	
}	

void sub(int arr1[3][3],int arr2[3][3]){
	cout<<"subtraction of matrix are-> "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr1[i][j]-arr2[i][j]<<" ";
		}
		cout<<endl;
	}}
	
void mul(int arr1[3][3],int arr2[3][3],int arr3[3][3]){
	int i,j,k;
	cout<<"multiplication of matrix are-> "<<endl;
	for( i=0;i<3;i++){
		for( j=0;j<3;j++){
			
			for( k=0;k<3;k++){
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];		
			} 	
		}
	}
	
for( i=0;i<3;i++)    
{    
for( j=0;j<3;j++)    
{    
cout<<arr3[i][j]<<" ";    
}    
cout<<"\n";    
}    

	
	
	
	
	
	
}
void trans(int arr1[3][3],int arr2[3][3]){
	int d[3][3];
	cout<<"transpose of 1st matrix is -> "<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{ 
		d[i][j]=arr1[j][i];
		cout<<d[i][j]<<" ";
		}	
		cout<<endl;
	}
}	

};

int main(){
operations s;
int arr1[3][3];
int arr2[3][3];

cout<<"enter the elemrnts of 1st matrix -> "<<endl;
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}	
cout<<"your 1st matrix --> "<<endl;
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr1[i][j];
		}
		cout<<endl;
	}	
	

cout<<endl<<endl;
cout<<"enter the elemrnts of 2nd matrix -> "<<endl;	
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}

cout<<"your 2nd matrix --> "<<endl;
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr2[i][j];
		}
		cout<<endl;
	}	
cout<<endl<<endl;
int loop=0;
while(loop==0){
cout<<"1--> addition of matrix "<<endl;
cout<<"2--> subtraction of matrix "<<endl;
cout<<"3--> transopose of matrix "<<endl;
cout<<"4--> multiplication of matrix "<<endl;
cout<<"5--> exit "<<endl<<endl;
cout<<"enter the choice--> ";
int choice;
cin>>choice;

switch(choice){

case 1:{
	s.add(arr1,arr2);
	break;
}	

case 2:{
	s.sub(arr1,arr2);
	break;
}

case 3:{
	s.trans(arr1,arr2);
	break;
}	

case 4:{
	int arr3[3][3]={0};
	s.mul(arr1,arr2,arr3);
	break;
}

case 5:{
	loop++;
cout<<"---------program ended--------";
		break;
}	
}

}		

}






















