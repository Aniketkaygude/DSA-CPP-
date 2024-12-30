#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(int n , int k){
	
	if(n == 1){
		return 0;
	}
	int parent = solve(n-1,k/2+k%2);
	
	if(parent ==0){
		
		if(k%2 == 1){
			return 0;
		}
		else{
			return 1;
		}
	}
	else{
		// parent == 1
		if(k%2==1){
			return 1;
		}
		else{
			return 0;
		}
	}
}

int main(){

int n = 2;
int k =2;

cout<<solve(n,k);

	return 0 ;
}
