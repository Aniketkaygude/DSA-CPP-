#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void subseq(string s,string ans ,int index){
	
	if(index>=s.size()){
		cout<<ans<<endl;
		return ;
	}
	

	// include
	subseq(s,ans+s[index],index+1);
	
			//exclude 
	subseq(s,ans,index+1);
	
}

void subseq2(vector<int>v,vector<int>ans2,int index){
	
	if(index>=v.size()){
		
		for(int i:ans2){
			cout<<i<<"  ";
		}
	
		cout<<endl;
		return;
	}
	 
	
	  // exclude
	  subseq2(v,ans2,index+1);
	   //include
	  
	   
int  n = v[index];
	  ans2.push_back(n);
	  subseq2(v,ans2,index+1);
//	ans2.pop_back();
	  
	
}



int main(){

string s = "abc";
string ans ="";
//subseq(s,ans,0);

vector<int>v={1,2,3};

vector<int>ans2;
subseq2(v,ans2,0);



	return 0 ;
}
