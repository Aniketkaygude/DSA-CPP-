#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool isSafe(vector<vector<int>>cuboids,int curr, int prev){
	
	if(cuboids[curr][0]<cuboids[prev][0] &&
	   cuboids[curr][1]<cuboids[prev][1] &&
	   cuboids[curr][2]<cuboids[prev][2] ){
	   	return true;
	   }
	   return false;
}

int solve( vector<vector<int>>cuboids , int size ,int curr ,int prev ){
	
	if(curr<0){
		return 0;
	}
	
	int pick =0;
	if(prev == -1 || isSafe(cuboids,curr , prev)){
		pick = cuboids[curr][2]+solve(cuboids,size,curr-1, curr);
	}
	
	int notpick = 0+ solve(cuboids,size,curr-1,prev);
	return max(pick ,notpick);
}

int main(){

vector<vector<int>> cuboids ={ {50,45,20},{95,37,53}, {45,23,12}          };
 
 // step 1 : sort all dimensions
 for(int i=0;i<cuboids.size();i++){
 	sort(cuboids[i].begin(),cuboids[i].end());
 }
 
 // step2: sort basis on first parameter
 sort(cuboids.begin() , cuboids.end());
  
  
 int ans = solve(cuboids,cuboids.size(),cuboids.size()-1 ,-1);
 cout <<ans<<endl<<endl;
 
 for(int i =0;i<cuboids.size();i++){
 	for(int j =0;j<cuboids[0].size();j++){
 		cout<<cuboids[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 

	return 0 ;
}
