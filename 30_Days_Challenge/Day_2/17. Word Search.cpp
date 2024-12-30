#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){


	return 0 ;class Solution {
public:

bool helper(vector<vector<char>>&nums ,int i , int j , int index,string& word){

          if(index == word.size()){
            return 1;
          } 

          if(i>=nums.size() || i<0 || j>=nums[0].size() || j<0 ||nums[i][j] =='$'|| nums[i][j]!=word[index] ){
            return false;
          } 
          
          char c= nums[i][j];
          nums[i][j]='$';
                    
          bool ans = helper(nums,i,j-1,index+1,word)||
          helper(nums,i,j+1,index+1,word)||
          helper(nums,i-1,j,index+1,word)||
          helper(nums,i+1,j,index+1,word);

          nums[i][j]=c;    
         
          return ans;
         

}

    bool exist(vector<vector<char>>& board, string word) {
        
          for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
              
              if(board[i][j] == word[0] && helper(board ,i,j,0,word)){
                return true;
              }

            } 
          }
        

             return false;
    }
};
}
