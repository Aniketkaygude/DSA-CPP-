#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;

int solve(int n, vector<int>&days,vector<int>&cost,int index){
	
	// base case;
	
	if(index>=n){
		return 0;
	}
	 int option1 = cost[0] + solve(n,days,cost ,index+1);
	 
	 int i;
	 // 7 days
	 for(i=index;i<n && days[i]<days[index]+7;i++);
	 
	 int option2 =cost[1] + solve(n,days,cost ,i);
	 
	// 30 days
	 for(i = index;i<n&&days[i] <days[index]+30;i++);
	 
	 int option3 = cost[2] + solve(n,days ,cost ,i++);
	 
	 return min(option1 , min(option2 ,option3));
	 
}

int RecMemo(int n, vector<int>&days,vector<int>&cost,int index,vector<int>&dp){
	
	// base case;
	
	if(index>=n){
		return 0;
	}
	
	if(dp[index]!=-1){
		return dp[index];
	}
	 int option1 = cost[0] + RecMemo(n,days,cost ,index+1,dp);
	 
	 int i;
	 // 7 days
	 for(i=index;i<n && days[i]<days[index]+7;i++);
	 
	 int option2 =cost[1] + RecMemo(n,days,cost ,i,dp);
	 
	// 30 days
	 for(i = index;i<n&&days[i] <days[index]+30;i++);
	 
	 int option3 = cost[2] + solve(n,days ,cost ,i++);
	 
	 dp[index] =  min(option1 , min(option2 ,option3));
	 return dp[index];
}



int tabulation(int n, vector<int>&days,vector<int>&cost,int index){
	
vector<int>dp(n+1,INT_MAX);

 dp[n] =  0;
 
 for(int k = n-1;k>=0;k--){
 	
 	int option1 = cost[0] + dp[k+1];
	 
	 int i;
	 // 7 days
	 for(i=k;i<n && days[i]<days[k]+7;i++);
	 
	 int option2 =cost[1] + dp[i];
	 
	// 30 days
	 for(i = k;i<n&&days[i] <days[k]+30;i++);
	 
	 int option3 = cost[2] + dp[i];
	 
	 dp[k] =  min(option1 , min(option2 ,option3));
 	
 }
 
	 return dp[0];
}


int space(int n, vector<int>&days,vector<int>&cost,int index){
	
   
   int ans =0;
   queue<pair<int,int>> month;
   queue<pair<int,int>>week;
   
   for(int day:days){
   	 
   	 // step1: remove expired days
   	while(!month.empty() && month.front().first + 30 <= day){
   	 	month.pop();
		}
	
	while(!week.empty() && week.front().first +7 <= day){
		week.pop();
	}
	
	// step2 : add cost for current day
	 
	 week.push((make_pair(day,ans+cost[1])));
	 month.push(make_pair(day , ans+cost[2]));
	 
	 //step3 : ans update
	 ans = min(ans+cost[0] ,min(week.front().second ,month.front().second ));	 	 
   }
   return ans;
	 
}

int main(){

int NOfdays=2;
vector<int>days={2,5};
vector<int>cost={1,4,25};

int index =0;

cout<<" by normal recurrsion --> "<<solve(NOfdays ,days,cost ,index)<<endl<<endl;

vector<int>dp(NOfdays+1,-1);
cout<<" by recurrsion + Memoization--> "<<RecMemo(NOfdays ,days,cost ,index,dp)<<endl<<endl;
//
cout<<" by tabulation --> "<<tabulation(NOfdays ,days,cost ,index)<<endl<<endl;

cout<<" by space optimization  --> "<<space(NOfdays ,days,cost ,index)<<endl<<endl;

	return 0 ;
}
