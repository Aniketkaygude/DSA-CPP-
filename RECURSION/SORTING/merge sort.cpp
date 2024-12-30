#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

void solve1( int *v ,int size){
	
	if(size <= 1){
		cout<<v [0]<<" "<<endl;
		return;
	}
	
	for(int i=0;i<size;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	solve1(v,(size+1)/2);
}

void solve2(int *arr ,int s, int e){
	if(s>=e){
		cout<<arr[0]<<"  ";
		return;
	}
	

	for(int i=0;i<=e;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
	
		int mid =s+(e-s)/2;
	solve2(arr,s,mid);	
	
}

void sort(int arr[] , int s ,int mid , int e){
	
int len1 =mid-s+1;
int len2 = e-mid;

int * first = new int[len1];
int *second = new int[len2];

int i=0;
for(int index=s ;index<=mid;index++){
	first[i] = arr[index];
	i++;
}

int j =0;
for(int index = mid+1;index<=e;index++){
	second[j] =arr[index];
	j++;
}




int ogindex=s;
int index1=0;
int index2 =0;



while(index1<len1 && index2<len2)
{
	if(first[index1]<second[index2]){
		arr[ogindex]=first[index1];
		ogindex++;
		index1++; 
	}
	else{
		arr[ogindex]=second[index2];
		ogindex++;
		index2++; 
	}
	
}

while(index1<len1){
		arr[ogindex]=first[index1];
		ogindex++;
		index1++; 
}
while(index2<len2){
	arr[ogindex]=second[index2];
		ogindex++;
		index2++;
}

	
}

void merge(int arr[],int s, int e){

   if(s>=e){
   	return;
   }
   
   int mid=s+(e-s)/2;
     
                
   merge(arr,s,mid);
   merge(arr,mid+1,e);
   
   sort(arr ,s,mid,e);  	  
   	
}

int main(){

 
int arr[7] = {3,4,1,5,9,2,7};
int size = 7;
merge(arr,0,size-1);

for(int i=0;i<size ;i++){
	cout<<arr[i]<<"  ";
}



	return 0 ;
}
