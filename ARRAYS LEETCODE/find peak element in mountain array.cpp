#include<iostream>
#include<vector>
using namespace std;


int findPeak(int arr[],int size) {
   

int start=0;
int end=size-1;
int mid =start+(end-start)/2;

while(start<end){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    mid =start+(end-start)/2;
}
return arr[end];

}


int main(){
	int arr[10]={2,3,4,5,6,5,4,3,2,1};
	cout<<findPeak(arr,10);
	
}

