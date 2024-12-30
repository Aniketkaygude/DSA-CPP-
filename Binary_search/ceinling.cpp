#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


int main(){
int loop = 0;
vector<int>arr ={ 2,3,5,9,14,16,18};

int s=0;
int e=arr.size()-1;
int target=4;

while(s<=e){
	
	int mid = s+(e-s)/2;
//	cout<<" mid --> "<< arr[mid]<<endl;
	
	if(arr[mid]==target){
		cout<<arr[mid]<<endl;
		return 0;
	}
	
	if(arr[mid]>target){
		e=mid-1;
	}
	else{
		s=mid+1;
	}
	
	
}

cout<<" s--> "<<arr[s]<<endl;
cout<<" e--> "<<arr[e]<<endl;

	return 0 ;
}
