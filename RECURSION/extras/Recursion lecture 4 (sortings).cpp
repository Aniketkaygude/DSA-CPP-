#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void bubble(int arr[] , int s ,int size){
	if(size== 0){
		return ;
	}
	
if(s<size){
	if(arr[s]>arr[s+1]){
		swap(arr[s],arr[s+1]);
		bubble(arr,s+1,size);
	} 
}
	else{
			bubble(arr , 0,size-1);
	}

}



void selection(int arr[] , int s ,int size , int max){
	
	if(size == 0){
		return ;
	}
	
	if(size>s){
		if(arr[s]>arr[max]){
			max =s;
	    	selection(arr,s+1,size,max);
		}
		else{
			selection(arr,s+1,size,max);
		}

	}
	else{
	
		swap(arr[size-1],arr[max]);
		selection(arr,0,size-1,0);
	}
	
}


int main(){
int arr[10]={10,9,8,7,6,5,4,3,2,1};
cout<<"before --> ";
for(int i = 0;i<10;i++){
	cout<<arr[i]<<" ";
}

selection(arr,0,10,0);
cout<<"\n \nafter --> ";
for(int i = 0;i<10;i++){
	cout<<arr[i]<<" ";
}

}
