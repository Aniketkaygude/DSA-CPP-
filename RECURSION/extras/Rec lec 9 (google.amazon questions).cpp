#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

void numberpad( string ans , string str){
	
	if(str.empty()){
		cout<<ans<<endl;
		return;
	}
	
	char ch = str[0];
    int digit = ch-'0';
    
	for(int i =(digit-1)*3;i<digit*3;i++ ){
		char ch = (char)('a'+i);
		numberpad(ans+ch,str.substr(1));
	}
	
}

list<string> RTnumberpad(string ans,string str){
	
	if(str.empty()){
		list<string>newlist;
		newlist.push_back( ans);
		return newlist;
	}
	
	list<string>afbc;
	
	char c = str[0];
	int digit = c-'0';
	
	for(int i = (digit-1)*3 ; i<digit*3;i++){
		char ch = (char)('a' +i);
		afbc.merge(RTnumberpad(ans+ch,str.substr(1)));
	}
	
	return afbc;
	
}

int RTnumberpadcount( string ans , string str){
	
	if(str.empty()){
		return 1;
	}
	int count =0;
	char ch = str[0];
    int digit = ch-'0';
    
	for(int i =(digit-1)*3;i<digit*3;i++ ){
		char ch = (char)('a'+i);
	count = count +	RTnumberpadcount(ans+ch,str.substr(1));
	}
	return count;
}

int main(){
                      
numberpad("","12");

cout<<endl<<endl;

list<string> ans = RTnumberpad("","12");

for(auto i: ans){
	cout<<i<<"  ";
}

cout<<endl<<endl;	
cout<<RTnumberpadcount("","12");	
	
}











