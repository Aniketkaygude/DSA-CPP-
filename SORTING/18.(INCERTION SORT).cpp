
#include<iostream>
using namespace std;


int insertionsort(int array[], int size){
	
	int i=1;

	while(i<size){
			int temp = array[i];
		int j=i-1;
		while(j>=0){
		 if(array[j]>temp){
//		 	shift
		 	array[j+1]=array[j];
		 	j--;
		 }
		 else{
//		 	ruk jao
          break;
		 }
		}
			i++;
		array[j+1]=temp;
	
	}
}


void sort(int arr[],int size){
	for(int i=1;i<size;i++){
		int temp=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}


int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	sort(array,10);
	for(int i=0;i<=9;i++){
		cout<<array[i]<<" ";
	}
	
}