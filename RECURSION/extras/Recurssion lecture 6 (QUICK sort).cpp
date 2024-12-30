#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void 	quick(int arr[], int low, int hi){
	
	if(low>=hi){
		return;
	}
	
int s = low;
int e = hi;
int mid = s+(e-s)/2;

int pivot = arr[mid];

while(s<=e){
	
while(arr[s]<pivot){
	s++;
}
	
	while(arr[e]>pivot){
		e--;
	}
	
	 if(s<=e){
	 	swap(arr[s],arr[e]);
	 	s++;
	 	e--;
	 }	 
}

//  now my pivot is at correct index ,sort the two halves now
quick(arr,low,e);
quick(arr, s, hi);

	
}


int main(){
int arr[10]={10,9,8,7,6,5,4,3,2,11};

quick(arr,0,9);

for(int i = 0;i<10;i++){
	cout<<arr[i]<<" ";
}

	return 0 ;
}
