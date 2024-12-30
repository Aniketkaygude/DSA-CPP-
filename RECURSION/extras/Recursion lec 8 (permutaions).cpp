#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void permutations1(string str  ,int index){

  int size =str.size();
if(index>size-1){
cout<<str<<endl;
return;
}

for(int i = index ; i<size;i++){
	swap(str[index],str[i]);
	permutations1(str,index+1);
	swap(str[index],str[i]);
}	
	
	
}

void permutations2(string str , string ans){

if(str.empty()){
	cout<<ans<<endl;
	return;
}	


char ch = str[0];

for(int i =0 ;i<=ans.size()  ;i++){
	string first = ans.substr(0,i);
	string second = ans.substr(i,ans.size());
	permutations2(str.substr(1),first+ch+second);
}
	
	
}

void permutations3(string str , string ans,vector<string> &output){

if(str.empty()){
	output.push_back(ans);
	return;
}	


char ch = str[0];

for(int i =0 ;i<=ans.size()  ;i++){
	string first = ans.substr(0,i);
	string second = ans.substr(i,ans.size());
	permutations3(str.substr(1),first+ch+second,output);
}
	
	
}


list<string> RTlist(string str ,string ans){
	if(str.empty()){
		list<string> newlist;
		newlist.push_back(ans);
		return newlist;
	}
	
	
	char ch = str[0];
	list<string>afbc;
	
	for(int i = 0 ;i<=ans.size();i++){
		string f = ans.substr(0,i);
		string s =ans.substr(i,ans.size());
		afbc.merge(RTlist(str.substr(1),f+ch+s));
	}
	return afbc;
  
	
	
	
}

int main(){
string str = "abc";

//permutations2(str,"");
//vector<string> output;

//permutations3(str,"",output);

//for(auto i :output){
//	cout<<i<<endl<<endl;
//}

list<string>ans = RTlist(str,"");

for(auto i:ans){
	cout<<i<<"   " <<endl;
}
	return 0 ;
}
