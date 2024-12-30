#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solve(string t1 ,string t2 ,int i ,int j)
{
	if(i==t1.size() || j == t2.size()){
		return 0;
	}
	
	if(t1[i] == t2[j]){
	 return 1+solve(t1,t2,i+1,j+1);
	}
	
	int ans1 = solve(t1,t2,i,j+1);
	int ans2 = solve(t1,t2,i+1,j);
	return max(ans1,ans2);
}

int main(){

string t1 = "abc";
string t2 = "def";

cout<<" The longest common subsequence --> "<<solve(t1,t2,0,0);

	return 0 ;
}
