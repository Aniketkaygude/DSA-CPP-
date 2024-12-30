#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<unordered_map>

using namespace std;

void solve(int index,string s,vector<string>&res,set<string>&st, string temp){
	 
	if(index>=s.size()){
	    temp.pop_back();
	    res.push_back(temp);
	    return;
}
	
	string helper = "";
	for(int i=index;i<s.size();i++){
		helper.push_back(s[i]);
		
		
		if(st.count(helper)){
			solve(i+1,s,res,st,temp+helper+" ");
		}
		
	} 
	
}

int main(){

string s = "catsanddog";
vector<string>dic={"cat","cats","and","sand","dog"};

 set<string>st;
 vector<string>res;
 
 for(auto i:dic){
 	st.insert(i);
 }

string temp="";
solve(0 ,s,res,st,temp);

for(string i:res){
	cout<<i<<endl;
}
	return 0 ;
}
