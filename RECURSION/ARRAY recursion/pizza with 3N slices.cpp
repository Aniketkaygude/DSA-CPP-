#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<int>&slices,int s , int e , int n)
{
	if(n == 0 || s>e){
		return 0;
	}
	
	int include= slices[s] +solve(slices , s+2,e,n-1);
	int exclude = 0+solve(slices,s+1,e,n);
	return max(include,exclude);;
}

int main(){

vector<int>slices ={1,2,3,4,5,6};

int totalslice   = slices.size();
int option1=solve(slices,0,slices.size()-2 , totalslice/3);
int option2=solve(slices,1,slices.size()-1,totalslice/3);

int ans = max(option1 , option2);

cout<< "ans --> "<<ans<<endl; 

	return 0 ;
}
