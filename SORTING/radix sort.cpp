#include<iostream>
using namespace std;

int getmax(int arr[],int size){
	
	for(int i=0;i<size;i++){
	if(arr[0]<arr[i]){
		arr[0]=arr[i];
	}	
	}
	return arr[0];
}


void radix (int arr[],int size){
	int max=getmax(arr,size);
	for(int pass=1;max/pass>0,pass*10){
		countsort(arr,size,pass)
	}
}

countsort(int arr[], int size,int pass){
	int count [10]={0};
	for(int i=0;i<size;i++){
		++count[(a[i]/pass)%10];
	}
	
	for(int i=0;i<=n;i++){
		count[i]=count[i]+count[i-1];
	}
	
	for(int i=n-1,i>0;i--){
		
	}
}

int main(){
	int arr[5]={1,22,3,4,51};
	cout<<getmax(arr,5);
}




















