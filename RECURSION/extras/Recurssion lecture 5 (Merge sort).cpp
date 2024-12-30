#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<array>

using namespace std;

void merge(int arr[] , int s ,int e){
	
	//calculating mid
	int mid = s+(e-s)/2;
	
    // claculating the size left part
	int len1 = mid-s+1;
	
	//calculating the size of right part
	int len2 = e-mid;

    // creating left part array
	 int *left = new int [len1];
	// creating right part array ;
	int *right =new int [len2];
	
	int k = s;
	for(int i = 0;i<len1;i++){
		left[i]= arr[k++];
	}
	k = mid+1;
	
	for(int i = 0;i<len2;i++){
		right[i]= arr[k++];
	}

	
	//merge 2 sorted arrays
	
	  int i = 0, j = 0;
	  k = s;

    while (i < len1 && j < len2) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            k++;
            i++;
        } else {
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    while (i < len1) {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < len2) {
        arr[k] = right[j];
        k++;
        j++;
    } 
	
	
}

void mergesort(int *arr , int s,int e ){
	
	if(s>=e){
		return;
	}
	
	int mid = s+(e-s)/2;
	
	// left part sorting
	mergesort(arr,s , mid);
	
	// right part sorting
	mergesort(arr,mid+1,e);
	
	
	// merge
	merge(arr,s,e);
	
}



int main(){
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	
	mergesort(arr,0,9);
	for(int i = 0; i<10;i++){
		cout<<arr[i]<<" ";
	}
}
