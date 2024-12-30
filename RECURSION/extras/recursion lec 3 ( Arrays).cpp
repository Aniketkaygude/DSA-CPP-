#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<list>
#include<algorithm>


using namespace std;

bool helper(int arr[] , int s ,int e){
	
    if(s == e){
    	return true;
	}

	
//  if(arr[s]>arr[s+1] ){
//  	return false;
//  }
  
 return arr[s]<arr[s+1] && helper(arr,s+1,e) ;
   	
}

bool helper2(int arr[] , int s ,int e){
	
    if(s == e){
    	return true;
	}

	
  if(arr[s]>arr[s+1] ){
  	return false;
 }
  
 return  helper2(arr,s+1,e) ;
   	
}

int linear(int arr[] , int key ,int s,int size){
   
	if(s>size-1){
		return -1;
	}
	
	if(arr[s] == key){
		return s;
	}
	
	return linear(arr,key,s+1,size);
	
}

list<int> IndexList(int arr[],int key,int s,int size,list<int> ansList){
 	
 	if(s > size-1 ){
 		return ansList;
	 }
	 
	 if(arr[s] == key){
	 	ansList.push_back(s);
	 }
	 return IndexList(arr,key,s+1,size,ansList);
 	
 }

int main(){

int arr[10] = {4,1,4,5,4,6,4,1,4,1};
	
list<int>ansList;
//cout<<helper(arr,0 ,9);
ansList  = IndexList(arr,4,0,10,ansList);

for(auto  i: ansList ){
	cout<<i<<" ";
}

	return 0 ;
}
