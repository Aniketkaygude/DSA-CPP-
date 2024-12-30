#include<iostream>
using namespace std;

void rotate(int arr[],int size,int k){
	
	
}

int main(){
	int arr[7]={1,2,3,4,5,6,7};
	int k =3;
	cout<<" array before sorting -- > "; 
	
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	int arr2[7]={0};
	for(int j=0;j<7;j++){
		arr2[(j+k)%7]=arr[j];
	}
	cout<<" array before sorting -- > "; 
	
	for(int i=0;i<7;i++){
		cout<<arr2[i]<<" ";
	}
    
	
}