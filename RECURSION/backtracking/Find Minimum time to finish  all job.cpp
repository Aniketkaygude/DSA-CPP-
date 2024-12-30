#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

void solve(int i,int k,int n, vector<int>&jobs,vector<int>&work, int &ans,int &res)
{
	
	if(i == n){
		
		ans = *max_element(work.begin(),work.end());
		res = min(res,ans);
		return;
	}
	
	if(*max_element(work.begin(),work.end())>= res){
		return;
	}
	 
	 for(int j=0;j<k;j++){
	   	 
	   	 // optimization
	 	  if(j>0 && work[j] == work[j-1]){
	 	  	continue;
		   }  
	 	//action
	 	work[j] = work[j]+jobs[i];
	 	
	 	// Rec call
	 	solve(i+1,k,n,jobs,work,ans,res);
	 	
	 	// undo action
	 	work[j]=work[j]-jobs[i];
	 	
	 }
	
}

int main(){

vector<int>jobs={1,2,4,7,8};
int k =2;

sort(jobs.begin(),jobs.end(),greater<int>());
int n =jobs.size();

if(n == k){
	cout<< jobs[0];
	return jobs[0];

}

vector<int>work(k,0);
int assignmentAns =0;
int finalAns = 999999 ;
int index = 0;

solve(index,k,n,jobs,work,assignmentAns,finalAns);
cout<< finalAns; 


	return 0 ;
}
