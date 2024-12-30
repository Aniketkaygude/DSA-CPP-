#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solve(int OpenBrackets , int RemainOpenBrackets,int CloseBrackets,int RemainCloseBrackets, string& temp , vector<string>&result )
{
	if(RemainOpenBrackets==0 && RemainCloseBrackets==0){
		result.push_back(temp);
		return ;
	}
	if(RemainOpenBrackets>0){
		temp.push_back('(');
		solve(OpenBrackets +1,RemainOpenBrackets-1,CloseBrackets,RemainCloseBrackets,temp,result); 
		temp.pop_back();
	}
	
	if(RemainCloseBrackets>0 && CloseBrackets<OpenBrackets){
			temp.push_back(')');
		solve(OpenBrackets ,RemainOpenBrackets,CloseBrackets+1,RemainCloseBrackets-1,temp,result); 
		temp.pop_back();
	}
}

int main(){

int  n = 3;
int  OpenBrackets = 1;
int  RemainOpenBrackets =n-1;
int  CloseBrackets = 0;
int RemainCloseBrackets = n;
string temp = "(";
vector<string>result;

solve(OpenBrackets,RemainOpenBrackets,CloseBrackets,RemainCloseBrackets,temp,result);

for(string i:result){
	cout<<i<<endl;
} 

	return 0 ;
}
