#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

string solve(int n  , vector<pair<int, string>>&v )
{
	
	if(n == 0){
		return "Zero"; 
	}
	for(auto i:v ){
		if(n>= i.first){           ///  number + english + rec Call
		
			
			string first = (n>=100 ?solve(n/i.first,v):"") ;
			string second =  (i.second) ;
			string remaining = 	(n%i.first == 0 ?"": solve(n%i.first,v));
			
			return first+ second+remaining;
		}
	}
	
	
	return "";
	 
}


int main(){

 vector<pair<int, string>> v ={{1000000000, "Billion "}, {1000000, "Million "}, 
{1000, "Thousand "}, {100, "Hundred "}, {90, "Ninety "}, {80, "Eighty "}, {70, "Seventy "},
{60, "Sixty "}, {50, "Fifty "}, {40, "Forty "}, {30, "Thirty "}, {20, "Twenty "}, {19, "Nineteen "}, 
{18, "Eighteen "}, {17, "Seventeen "}, {16, "Sixteen "}, {15, "Fifteen "}, {14, "Fourteen "}, 
{13, "Thirteen "}, {12, "Twelve "}, {11, "Eleven "}, {10, "Ten "}, {9, "Nine "}, {8, "Eight "}, 
{7, "Seven "}, {6, "Six "}, {5, "Five "}, {4, "Four "}, {3, "Three "}, {2, "Two "}, {1, "One "}};


string ans ="";
int num = 1234567322222233333333;
ans = solve(num,v );

cout<<ans; 
  


	return 0 ;
}
