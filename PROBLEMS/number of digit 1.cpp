#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int len(int n){
	if(n<=0){
		return 0;
	}
	return 1+len(n/10); 
 	
} 

int helper(int n){
	if(n ==0){
		return 0;
	}
	
	if(n<10){
		return 1;
	}
	
	int length= len(n); 
	int base = pow(10,length-1);
	int   first = n/base;
	int rem =n%base;
	 
	int oneInbase=0;
	
	if(first==1){
		oneInbase= n-base+1;
	}
	else{
		oneInbase=base;
	}
	
	return helper(rem)+oneInbase + first*helper(base-1);
	
 
}

int main(){

int n=10;
//cout<<len(n);
cout<<helper(n);
	return 0 ;
}
