#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void swap (int &a , int &b){
	
	a=a^b;
	b=a^b;
	a=a^b;
}

void NthXor(int n){
	if(n%4 == 0){
		cout<<n;
	}
	
	if(n%4 == 1){
		cout<<1;
	}
	
	if(n%4 == 2){
		cout<<n+1;
	}
	
	if(n%4 == 3){
		cout<<0;
	}
}

void RangeXor(int l , int r ){
	
}

void ithBitSet(int num,int bit){
	
	int mask = 1<<bit;
    bool ans=num&mask;
    cout<<ans;
}

void setNthBit(int num,int bit){
	
	int mask=1<<bit;
    num = num|mask;	
	cout<<num;
}

void clearNthBit(int  num, int bit)
{
    
	int mask= ~(1<<bit);
	num=num&mask;
	cout<<num<<endl;	

}

void ClearTheLastBit(int n){
	cout<<(n&(n-1));
	
}

void PowerOfTwo(int n){
	
	if((n&(n-1)) == 0){
		cout<<"Yes "<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

int main(){
//
//int a=10;
//int b=20;
//cout<<" Previous A and B --> "<<a<<"  "<<b<<endl;
//swap(a,b);
//cout<<" After    A and C --> "<<a<<"  "<<b<<endl<<endl;

//NthXor(14);
//ithBitSet(10,0);


//setNthBit(8,1);
//clearNthBit(10,3);
PowerOfTwo(4);
	return 0 ;
}
