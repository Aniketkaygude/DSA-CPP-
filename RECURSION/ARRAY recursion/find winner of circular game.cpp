#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(int n,int k){
	if(n == 1){
		return 0;
	}
	return (solve(n-1,k)+k)%n;
}

int main(){
	int n = 5;
	int k =2;
cout<<solve(n,k)+1;

	return 0 ;
}
