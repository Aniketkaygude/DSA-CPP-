#include<iostream>
using namespace std;


int partition(int array[],int s,int e){
	int pivot=array[s];
	
	int count=0;
	for(int i=s+1;i<=e;i++){
		if(array[i]<=pivot){
			count++;
		}
	}
	
	// place pivot at right position
	int pivotindex=s+count;
	swap(array[s],array[pivotindex]);
	
	//left and part sorting
	int i,j;
	i=s;
	j=e;
	
	while(i<pivotindex &&j>pivotindex){
		while(array[i]<=pivot){
			i++;
		}
		while(array[j]>pivot){
			j--;
		}
		
		if(i<pivotindex&&j>pivot){
			swap(array[i],array[j]);
			i++;
			j--;
		}
	return pivotindex;
	
}}



int partition(int arr[],int s,int e){
	int pivot=arr[s];
	int start=s;
	int end=e;
	while(start<=end){
		while(arr[start]<=pivot){
			start++;
		}
		while(arr[end]>pivot){
			end--;
		}
		if(start<end){
			swap(arr[start],arr[end]);
		}
	}
	swap(arr[s],arr[end]);
	return end;
}
void quicksort(int array[],int s,int e){
	//base case
	if(s<=e){
	
	// partitioning
	int p=partition(array,s,e);
	
	//sorting left side of array
	quicksort(array,s,p-1);
	
	//sorting right side of array
	quicksort(array,p+1,e);	}
}


int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	int size=10;
	int s=0;
	int e=size-1;	
  quicksort(array, s, e);
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	
	int array[5]={5,4,3,2,1};
  quicksort(array,0,4);
  for(int i=0;i<5;i++){
      cout<<array[i]<<" ";
}} 


// Online C++ compiler to run C++ program online






















