#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int solve(int arr[], int size){
	if(size < 0){
		return -1;
	}
	
	int ans = arr[0];
	int rec = solve(arr+1,size-1);
	return max(ans,rec);
	
}


int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout<< solve(arr ,9);

	return 0 ;
}
