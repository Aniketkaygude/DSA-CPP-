#include<iostream>
using namespace std;
/*
void shellsort(int arr[],int size){
	
	for(int gap=size/2;gap>=1;gap=gap/=2){
		for(int j=gap;j<size;j++){
			for(int i=j-gap;i>=0;i=i-gap){
				if(arr[i+gap]>=arr[i]){
					break;
				}
				else{
					swap(arr[i+gap],arr[i]);
				}
		}
		}
	}

}

int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	shellsort(array,10);
	for(int i=0;i<10;i++){
		cout<<array[i]<<"  ";
	}
	
}

*/

float bubble(float arr[],int size){
	for(int i=1;i<size;i++){
		for(int j=0;j<size-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}	
}

float selection(float arr[],int size){
	for(int i=0;i<size-1;i++){
		int min=i;
		for(int j=i+1;j<size;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
}

float incertion(float arr[],int size){
	for(int i=1;i<size;i++){
		float temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

float shell(float arr[],int size){
	for(int gap=size/2;gap>=1;gap=gap/=2){
		for(int j=gap;j<size;j++){
			for(int i=j-gap;i>=0;i=i-gap){
				if(arr[i+gap]>arr[i]){
					break;
				}
				else{
					swap(arr[i+gap],arr[i]);
				}
			}
		}
	}
}




int main(){
	float arr[4]={4.4,3.3,2.2,1.1};
shell(arr,4);
for(int i=0;i<4;i++){
	cout<<arr[i]<<"  ";
}	
	
	
}


































	












