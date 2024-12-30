#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


int invalidcount(string s){
       
       stack<char>st;

        for(char i:s){
           
           if(i=='('){
               st.push(i);
           }
           else if(  i==')' ){

                if(!st.empty() && st.top()=='(') {
                st.pop();
                }
                else{
               st.push(i); 
           } 
           
           }   

        }
        return st.size();
   }
 
void helper(string s, vector<string>& ans, int rcnt, unordered_map<string,bool>&m)
{
    if(m[s]==true){
        return;
    }
    else{
        m[s]=true;
    }

    if(rcnt == 0){

       if(invalidcount(s) == 0){
           ans.push_back(s);
           cout<<"ans--> "<<s<<endl;
       }   
       return;
    }

      for(int i=0;i<s.size();i++){
          string l= s.substr(0,i);
          string r=s.substr(i+1);
          
          cout<<"before --> "<<s<<endl;
          string temp=l+r;
          cout<<" after --> "<<i<<"  "<<temp<<endl<<endl;
          
        
          
          helper(temp,ans,rcnt-1,m);
            
      }
     
}

int main(){

string s="()())())";
   int removalcnt=invalidcount(s);
      cout<<removalcnt;
        unordered_map<string,bool>m;
        vector<string>ans;
        helper(s,ans,removalcnt,m);
       
       cout<<endl<<endl;
       
       
       for(string i:ans){
       	cout<<i<<endl;
	   }
        
        
	return 0 ;
}
