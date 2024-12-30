#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

int  Nofways(int row , int col){

if(row ==1 || col == 1 ){
	return 1;
}	

int left = Nofways( row -1 ,col);
int right =Nofways(row , col-1);

return left+right;

}


void  mazepaths(string  p ,int row , int col){

if(row ==1 && col == 1 ){
	cout<<p<<endl;
	 return;
}	

if(row>1){
	mazepaths(p+"d",row -1 ,col);
}

if(col>1){
	mazepaths(p+"r",row , col-1);
}

}


list<string> pathlist (string p , int row , int col){

if(row == 1 && col == 1){
	list<string>  list ;
	list.push_back(p);
	return list;
}

 
 list<string>afbc;
 
 if(row>1){
afbc.merge(pathlist(p+"d",row -1 ,col));
}

if(col>1){
afbc.merge(	pathlist(p+"r",row , col-1));
}

return afbc;

}


void diagonal(string s , int row   , int col){
	if( row == 1  && col == 1){
		cout<<s<<" ";
		return;
			}
			
	if(row>1 && col>1){
		diagonal(s+"D", row-1 , col-1);
		}
		
	if(row>1){
		diagonal(s+"V" ,row-1,col);
	}	
	
		if(col>1){
		diagonal(s+"H" ,row,col-1);
	}
	
		
	}		

list<string> diagonal2(string s , int row   , int col){
	if( row == 1  && col == 1){
		list<string>list;
		list.push_back(s);
		return list;
			}
			
			
			list<string>afbc;
			
	if(row>1 && col>1){
	afbc.merge(	diagonal2(s+"D", row-1 ,  col-1) );
		}
		
	if(row>1){
	afbc.merge(		diagonal2(s+"V" ,row-1,col));
	}	
	
		if(col>1){
	afbc.merge(		diagonal2(s+"H" ,row,col-1));
	}
	return afbc;
		
	}		


int main(){
list<string>ans;

ans = diagonal2("",3,3);
//
//for(auto i : ans){
//	cout<<i<<" ";
//}
diagonal("",3,3);

}
