#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solve (string s1, int index1, string s2, int index2, int carry, string& ans  )
{
 
 if(index1<0 && index2<0 && carry == 0){
 	return;
 }	
 
  int first =0;
  int second = 0;
  if(index1>=0) {
  
  	 first=  (s1[index1]-'0'); 
  }
  
   if(index2 >=0)
   {
  second = s2[index2]-'0';
  }
   
   int num  = first+second+carry;
  int last = num%10;
  carry = num/10;
  
 ans.push_back(last+'0');
  solve(s1,index1-1,s2,index2-1,carry,ans);

	
}

int main(){

string s1 = "50";
string s2 = "50";

int carry =0;
string ans="";
 solve(s1 ,s1.size()-1 , s2,s2.size()-1 , carry,ans);
 reverse(ans.begin(),ans.end());
 cout<<ans;
	return 0 ;
}
