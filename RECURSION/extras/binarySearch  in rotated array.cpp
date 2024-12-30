#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int rotated(int arr[] , int key,int s,int e){

    
    if(s>e-1){
    	return -1;
	}
	
	int mid = s+(e-s)/2;
	
	if(arr[mid] == key){
		return mid;
	}
	
	
	if(arr[s]<=arr[mid]){
		if(key>=arr[s] && key<=arr[mid]){
			return rotated(arr,key,s,mid-1);
		}
		else{
			return rotated(arr,key,mid-1,e);
		}
	}
	
	if(key>=arr[mid] && key<=arr[e]){
			return rotated(arr,key,mid+1,e);
	}
		else{
			return rotated(arr,key,s,mid-1);
		}
		
	
    
}

int main(){

int arr[7]={4,5,6,7,0,1,2};
cout<<rotated(arr,2,0,7);
	return 0 ;
}
