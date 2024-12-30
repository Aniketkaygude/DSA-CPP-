#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


void permwithIndex(string s,string ans ,int index){
	if(index>=s.size()){
		cout<<s<<endl;
	}
	
	for(int i=index;i<s.size();i++){
		swap(s[index],s[i]);
		permwithIndex(s,ans,index+1);
		swap(s[index],s[i]);
	} 
	 
}

void permwithI(string s,string ans ,int index){
	if(index>=s.size()){
		cout<<s<<endl;
	}
	
	for(int i=index;i<s.size();i++){
		swap(s[index],s[i]);
		permwithI(s,ans,i+1);
		swap(s[index],s[i]);
	} 
	 
}


int main(){

permwithIndex("abc","",0);
cout<<endl<<endl<<endl;
permwithI("abc","",0);

	return 0 ;
}
