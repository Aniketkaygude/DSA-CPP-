#include<iostream>
using namespace std;

/*
// binnary search using recursion

bool sorted(int array[],int size){
	int i=0;
	
	if(size==0||size==1){
		return true;	}
		
	if(array[i]>array[i+1]){
		return false;
	}	
	
	else{
	bool remainingpart=	sorted(array+1,size-1);
	return remainingpart;
	}
	
}

int main(){
	int size;
	cout<<"enter size--> ";
	cin>>size;
	int array[1000];
	cout<<"enter element of array-->";
 for(int i=0;i<size;i++){
 	cin>>array[i];
 }	
 
int ans=sorted(array,size);
if(ans==1){
	cout<<"array is sorted";
}
else{
	cout<<"array is not sorted";
}	
} */


/*

// SUM OF ARRAY ELEMENTS
int sumis(int *array,int size){
	
	if(size==0){
		return 0;
	}
	
	if(size==1){
		return array[0];
	}
	int remainingpart=sumis(array+1,size-1);
	int sum = array[0]+remainingpart;
	return sum;
}
int main(){
	int size;
	cout<<"enter the size of array--> ";
	cin>>size;
	int array[1000]={0};
	
	cout<<"\n enter array elementd --> ";
	for(int i=0;i<size;i++){
		cin>>array[i];	}
		
	int ans=sumis(array,size);
		cout<<"sum is --> "<<ans;	
}
*/


/*
//LINEAR SEARCH USING RECURSSION
bool linearsearch(int array[],int size,int key){
	
	if(size==0){
		return false;
	}
	
	if(size==key){
		return true;
	}
	else{
	
	bool remainingpart=linearsearch(array+1,size-1,key);
	return remainingpart;
	}
}

int main(){
	int size,key;
	cout<<"enter the size of array--> ";
	cin>>size;
	cout<<"enter key element--> ";
	cin>>key;
	int array[1000]={0};
	cout<<"enter array elements --> ";
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	
	int ans=linearsearch(array,size,key);
	if(ans==1){
		cout<<"element is present"<<endl;
	}
	else{
		cout<<"not present";
	}
	
}
*/


// BINARY SEARCH USING RECURSSION

void print(int array[],int s,int e){
	for(int i=s;i<e;i++){
		cout<<array[i]<<" ";
	}cout<<endl;
}

bool binarysearch(int *array,int s,int e,int key ){
	
	print(array,s,e);
	
	if (s>e){
		return false;
	}
	
	int mid=s+(e-s)/2;
	if(array[mid]==key){
		return true;
	}
	
	if (array[mid]<key){
		
		return binarysearch(array,mid+1,e,key);
	}
	//array[mid]>key
	else {
	
	return	binarysearch(array,s,mid-1,key);
	}
}

int main(){
	
	int size,key;
	cout<<"enter the size of array--> ";
	cin>>size;
	cout<<"enter key element--> ";
	cin>>key;
	int s=0;
	int e=size-1;
	int array[1000]={0};
	cout<<"enter array elements --> ";
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	
	int ans=binarysearch(array,s,e,key);
		if(ans){
		cout<<"element is present"<<endl;
	}
	else{
		cout<<"not present";
	}
}


