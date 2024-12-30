#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void helper(string s,int index,int &maxi,int cnt){
	
	if(index>=size() || cnt>1){
		return;
	}
	
	for(int i=index;i<s.size();i++){
		
		if(s[index]<s[i]){
		     
		    swap(s[index],s[i]);
		    maxi=max(maxi,stoi(s));
		    helper(s,)
		}	
      }

}


int main(){
	
	string s = "2736";   // 98863
	
     int maxi=stoi(s);
     helper(s,0,maxi,0);
     cout<<maxi;


	return 0 ;
}
