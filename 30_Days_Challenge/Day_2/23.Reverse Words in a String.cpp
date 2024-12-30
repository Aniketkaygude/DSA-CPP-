class Solution {
public:
    string reverseWords(string s) {
       
       
    int i=s.size()-1;
    int j =0 ;

    string ans="";

    while(i>=0){

        while(i>=0 && s[i] == ' ')i--;

        j=i;
        while(i>=0 && s[i]!=' ')i--;
      ans+=s.substr(i+1,j-i)+" ";
       
    }
  
   while(ans[ans.size()-1] == ' ' ) ans.pop_back();
   
    return ans;

           
        
        
    }
};