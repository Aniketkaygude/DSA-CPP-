#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int  solve(int n){
	
if(n == 1){
	return n;
}
return 2* (((n/2)+1) -solve(n/2));	 
	
}

int main(){
int n = 6 ;

cout<<solve(n);

	return 0 ;
}
