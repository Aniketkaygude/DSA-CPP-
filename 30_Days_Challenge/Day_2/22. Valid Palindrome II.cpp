class Solution {
public:
 
 bool helper(string &str,int s,int e,int cnt){
     if(s>e){
         return true;
     }
     if(cnt>1){
         return false;
     }
     
      if(str[s]==str[e]){
          return helper(str,s+1,e-1,cnt);
      }
      else{
          return helper(str,s+1,e,cnt+1) || helper(str,s,e-1,cnt+1);
      }

 }

    bool validPalindrome(string s) {
        
        return helper(s,0,s.size()-1,0);
    }
};