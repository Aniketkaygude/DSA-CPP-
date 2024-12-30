#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

 int helper(string &s1,string &s2,int index1,int index2, vector<vector<int>>&dp)
{
      if(index1 >=s1.size()){
          return s2.size()-index2;
      }

      if(index2>=s2.size()){
          return s1.size()-index1;
      }

      if(dp[index1][index2]!=-1){
          return dp[index1][index2];
      }

      if(s1[index1]==s2[index2]){
          return helper(s1,s2,index1+1,index2+1,dp);
      }
      else{
        
        int insert = 1+helper(s1,s2,index1,index2+1,dp);
        int del    = 1+helper(s1,s2,index1+1,index2,dp);
        int replace = 1+helper(s1,s2,index1+1,index2+1,dp);
        

        dp[index1][index2]= min(del,min(insert,replace));
        return dp[index1][index2];
           
      }
      

} 

int main(){

string word1="horse";
string word2="ros";

int n = word1.size()>word2.size()?word1.size():word2.size();
          vector<vector<int>>dp(n+1,vector<int>(n,-1));
         cout<< helper(word1,word2,0,0,dp);

	return 0 ;
}
