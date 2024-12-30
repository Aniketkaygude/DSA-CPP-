#include<iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[]){
	
	int i=0;
	int j=0;
	int k=0; 
	
	while(i<m && j<n){ 
	
	if(arr1[i]<arr2[j]){
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	
	else{
		arr3[k]=arr2[j];
		k++;
		j++;
	}
	
	}
	
	while(i<m){
		arr3[k++]=arr1[i++];
		
	}
	
	while(j<n){
		arr3[k++]=arr2[j++];
		
	}
	
}
void sort(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]<arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
}

float findmedian(int *arr,int size){
	
	if(size%2==0){
	int m=size/2;
	double j=arr[m-1];
	double i=arr[m];
	double mid=(i+j)/2;
	
		return mid;
	}
	else if(size%2==1){
		
		return arr[(size-1)/2];
	}
} 
void print(int ans[],int n){
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;

}
int main(){
	int arr1[5]={10,9,8,7,6};
	int arr2[4]={5,4,3,2};
	int arr3[9]={0};
    
	merge(arr1,5,arr2,4,arr3);
	sort(arr3,9);
	print (arr3,9);
    	cout<<"median is --> "<<findmedian(arr3,9);	

}




