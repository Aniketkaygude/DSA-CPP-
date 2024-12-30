#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool helper(string s , string t , int index1 , int index2)
{
         if(index1 == s.size()){
             return true;
         }
         if(index1<s.size() && index2 >=t.size()){
             return false;
         }
         
         if(s[index1] == t[index2] ){
             return helper(s,t,index1+1 ,index2+1);
         }
         else{
             return helper(s,t,index1,index2+1);
         }

}

int solve(string s, string t , int  i , int j)
{
	if(i == s.size() || j == t.size()){
		return 0;
	}
	
  if(s[i] == t[j]){
  	return 1+solve(s,t,i+1,j+1);
  }else{
  	return solve(s,t,i,j+1);
  }
	
}

int main(){
string s = "axc";
string t = "ahbgdc";

if(solve(s,t,0,0) == s.size()){
	cout<<" is a substring "<<endl;
}
else{
	cout<<" not a sunstring "<<endl;
}

	return 0 ;
}
