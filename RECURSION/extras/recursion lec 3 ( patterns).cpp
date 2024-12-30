#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void traingle1(int row , int col){

if(row  == 0 ){
	return;
}

if(row>col){
	cout<<"* ";
	traingle1( row ,col+1);
	
}
else{
	cout<<endl;
	traingle1(row-1,0);
 
}

}

void traingle2(int row,int col){
	if(row == 0){
		return  ;
	}
	
	
	if(row>col){
		traingle2(row,col+1);
		cout<<"*  ";
	}
	else{
		traingle2(row-1,0);
		cout<<endl;
	}
	
}

int main(){
int row= 5 ;
int col = 0;
 traingle1(row , col) ;
  traingle2(row , col) ;
	return 0 ;
}
