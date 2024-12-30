#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>

using namespace std;


void dice(string str ,int target ){
	if(target ==0){
		cout<<str<<endl;
		return ;
	}
	
	for(int i=1 ;i<=6 && i<=target ;i++){
		dice(str+to_string(i),target-i);
	}
}

int dicecount(string str ,int target ){
	if(target ==0){
	
		return 1 ;
	}
	int count = 0;
	for(int i=1 ;i<=6 && i<=target ;i++){
	count +=	dicecount(str+to_string(i),target-i);
	}
	
	return count;
}

int main(){

dice("",4);
cout<<dicecount("",4);
	return 0 ;
	
	
	
}
