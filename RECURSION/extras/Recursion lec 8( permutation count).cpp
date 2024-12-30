#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int permutationcount(string processed ,string unprocessed){
	
	if(unprocessed.empty()){
		return 1;
	}
	
	int count = 0 ;
	char ch = unprocessed[0];
	
	for(int i = 0;i<=processed.size();i++){
		string f = processed.substr(0,i);
	    string s = processed.substr(i,processed.size());
	    count =  count+ permutationcount(f+ch+s,unprocessed.substr(1));
	}
	
	return count;
}


int main(){

cout<<permutationcount("","abcd");
	return 0 ;
}
