#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(string a ,string b , int i ,int j)
{
	if(i == a.size()){
		return b.size()-j;
	}
	
	if(j == b.size()){
		return a.size()-i;
	}
	
	 if(a[i] == b[j]){
	 	
	 	// match 
	 	return solve(a,b,i+1,j+1);
	 }
	 
	 else{
	 	 // no match
	 	 
	 	 int insert =solve(a,b,i,j+1);
	 	 int replace = solve(a,b,i+1,j+1);
	 	 int deleteans= solve(a,b,i+1,j);
	 	 
	 	 int finalans= min(insert ,min(replace , deleteans))+1 ;
	 	 return finalans;
	 }
	 
}


int main(){

/* 
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character
 */
 
string word1 = "horse";
string word2 = "ros";

int ans = solve(word1,word2 ,0 ,0);
cout<<" minimum distace is -->  "<<ans;
	return 0 ;
}
