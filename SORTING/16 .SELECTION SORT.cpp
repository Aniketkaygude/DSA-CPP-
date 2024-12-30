#include<iostream>
using namespace std;
//  SELECTION SORT

int selectionsort(int array[],int size){
	
	for(int i=0;i<size-1;i++){
		int minindex=i;
		
		for(int j=i+1;j<size;j++){
			if(array[j]<array[minindex]){
				minindex=j;
			}
		}
		swap(array[minindex],array[i]);
	}
}
void sort(int array[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(array[j]>array[i]);
			int temp=array[j];
			array[j]=array[i];
			array[i]=temp;
		}
	}
	cout<<"\n sorting "<<endl;}

int main(){
	
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	sort(array,10);
	
	for(int i=0;i<10;i++){
		cout<<array[i]<<" ";
	}
}




















