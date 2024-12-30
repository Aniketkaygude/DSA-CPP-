#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int helper(string s1,string s2,int i , int j){

    if(i>=s1.size()||j>=s2.size()){
        return 0;
    }

    if(s1[i] == s2[j]){
        return 1+helper(s1,s2,i+1,j+1);
    }
    return max(helper(s1,s2,i+1,j),helper(s1,s2,i,j+1));
}

    int longestPalindromeSubseq(string s) {

            string s1 = s;
            string s2 =s;
            reverse(s2.begin(),s2.end());
            return helper(s1,s2,0,0); 
            
    }

int main(){

string s ="aaabaaa";
  string s1 = s;
            string s2 =s;
            reverse(s2.begin(),s2.end());

            cout<< helper(s1,s2,0,0); 
}
