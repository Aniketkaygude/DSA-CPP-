#include<iostream>
using namespace std;

bool ispossible(int *&arr,int k,int mid ){
	int painter = 1;
	int paintsum = 0;
	
	for(int i = 0;i<4;i++){
		if(paintsum+arr[i]<=mid){
			paintsum = paintsum+arr[i];
		}
		else{
			painter++;
			if(painter>k || arr[i]>mid){
				return false;
			}
			paintsum = arr[i];
		}
	}
	return true;
	
}

int findLargestMinDistance(int *&boards,int k){
	int s=0;
	int sum=0;
	for(int i=0;i<4;i++){
		sum = sum + boards[i];
	}
	int e = sum;
	int mid = s + (e-s)/2;
	int ans = -1;
	while(s<=e){
		if(ispossible(boards,k, mid)){
			ans = mid;
			e=mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return ans;
}

int main(){
	int boards[4]={10,20,30,40};
	
	cout<<"mindistance --> ";
	int b = findLargestMinDistance(boards,2);
	cout<<b;
	
}