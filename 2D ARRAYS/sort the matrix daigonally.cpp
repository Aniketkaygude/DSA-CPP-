#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


void helper(vector<int> &ans , vector<vector<int>>&res , int row , int col){ 
	 
int firstrow = 0;
int firstcol=0;
int lastcol =col-1;
int lastrow = row-1;

int index=0;
int total = row*col;

while(index<total){
	
		for(int i = firstcol;index<total && i<=lastcol;i++){
		res[firstrow][i]=ans[index++];
	}
	
	firstrow++;
	
	for(int i = lastrow ; index<total && i>=firstrow;i-- ){
		res[i][firstcol] = ans[index++];
	}
	
	firstcol++;
	

	
}
 	 
	
}



int main(){

vector<vector<int>>nums={ {11,25,66,1,69,7} , 
                          {23,55,17,45,15,52} ,
                          {75,31,36,44,58,8} ,
						{	22,27,33,25,68,4},
				        {84,28,14,11,5,50}
						  };
                          
vector<int>ans;

for( auto it : nums ){
	for(int i: it){
		ans.push_back(i);
	}
}                          

sort(ans.begin(),ans.end());
for(int i:ans){
	cout<<i<<" ";
} 
int row = nums.size();
int col = nums[0].size();
cout<<endl<<endl;
vector<vector<int>>res(nums.size(),vector<int>(nums[0].size()));


helper( ans ,res,row,col );

for(int i=0;i<res.size();i++){
	
	for(int j=0;j<res[0].size();j++){
		cout<<res[i][j]<<" ";
	}
	cout<<endl;
}

	return 0 ;
}
