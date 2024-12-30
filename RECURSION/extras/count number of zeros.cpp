#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int CntZeros(int n , int cnt){
	if(n == 0){
		return cnt;
	}
	
	if(n%10 == 0){
	return	CntZeros(n/10 , cnt+1);
	}
return	CntZeros(n/10,cnt);
}

int main(){

cout<<CntZeros(112220,0);


	return 0 ;
}
