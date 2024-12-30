#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(vector<int>&weight , vector<int>&value,int index,int weightcapacity ){
	
	if(index == 0 ){
		
	if(weight[0]<=weightcapacity){
		return value[0];
	}
	else{
		return 0;
	}	
	
	}
	
	int include = 0;
	
	if(weight[index]<=weightcapacity){
		include = value[index]+solve(weight,value,index-1,weightcapacity-weight[index]);
	}
	
	 int exclude = 0+solve(weight,value,index-1,weightcapacity);
	 
	 int ans = max(include,exclude);
	 return ans;
}





int RecMemo(vector<int>&weight , vector<int>&value,int index,int weightcapacity,vector<vector<int>>&dp){
	
	if(index == 0){
		
	if(weight[0]<=weightcapacity){
		return value[0];
	}
	else{
		return 0;
	}	
	
	}
	
	if(dp[index][weightcapacity]!=-1){
	//	cout<<"ji"<<endl;
		return dp[index][weightcapacity];
	}
	
	int include = 0;
	
	if(weight[index]<=weightcapacity){
		include = value[index]+RecMemo(weight,value,index-1,weightcapacity-weight[index],dp);
	}
	
	 int exclude = 0+RecMemo(weight,value,index-1,weightcapacity,dp);
	 
	 int ans = max(include,exclude);
	 dp[index][weightcapacity] =ans;
	 
	 return dp[index][weightcapacity];
}



int tabulation(vector<int>&weight , vector<int>&value,int index,int weightcapacity){
	
 // step 1 :
  vector<vector<int>>dp(value.size(),vector<int>(weightcapacity+1));
   
   // step 2 : analyse base case
   
   for(int w = weight[0];w<=weightcapacity;w++){
   	
   		if(weight[0]<=weightcapacity){
		dp[0][w]= value[0];
	}
	
	else{
		dp[0][w]= 0;
	}	
	
   }
   
     for(int index =1 ;index<value.size();index++){
     	
     	for(int w = 0;w<=weightcapacity;w++){
     		
     		 int include = 0;
     		 
          	if(weight[index]<=w){
	      	include = value[index]+dp[index-1][w-weight[index]];
	        }
	
	   int exclude = 0+dp[index-1][w];
	  dp[index][w] = max(exclude,include);
		 }
	 }

return dp[value.size()-1][weightcapacity];
}


int space (vector<int>&weight , vector<int>&value,int index,int weightcapacity){
	
	// step1 ;
	vector<int>prev(weightcapacity+1,0);
	vector<int>curr(weightcapacity+1,0);
	
	// step2:analyse Base case
	
	for(int w = weight[0];w<=weightcapacity;w++){
   	
   		if(weight[0]<=weightcapacity){
		prev[w]= value[0];
	}
	
	else{
		prev[w]= 0;
	}	
	
   }
   
   for(int index =1 ;index<value.size();index++){
     	
     	for(int w = 0;w<=weightcapacity;w++){
     		
     		 int include = 0;
     		 
          	if(weight[index]<=w){
	      	include = value[index]+prev[w-weight[index]];
	        }
	
	   int exclude = 0+prev[w];
	  curr[w] = max(exclude,include);
		 }
		 
		 prev= curr;
		 
	 }
   return prev[weightcapacity];
   
	
}

int main(){

/*
A thief is robbing a store and can carry a maximal weight of W into his knapsack.
 There are N items and the ith item weighs wi and is of value vi. 
 Considering the constraints of the maximum weight that a knapsack can carry, 
 you have to find and return the maximum value that a thief can generate by 
 stealing items. 
 */

vector<int> weight={1,2,3,5};
vector<int>value={5,4,8,6};
int weightcapacity=5;

int n =4;
int index =n-1;
cout<<" by noramla recurrsion --> "<< solve(weight,value,index,weightcapacity)<<endl<<endl;

vector<vector<int>>dp(n,vector<int>(weightcapacity+1,-1));
cout<<" by  recurrsion + memoization --> "<< RecMemo(weight,value,index,weightcapacity,dp)<<endl<<endl;

cout<<" by tabulation --> "<<tabulation(weight,value,index,weightcapacity)<<endl<<endl;

cout<<" by spaceoptimization --> "<<space(weight,value,index,weightcapacity);

	return 0 ;
}
