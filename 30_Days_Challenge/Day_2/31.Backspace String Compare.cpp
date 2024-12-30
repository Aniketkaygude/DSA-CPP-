class Solution {
public:

string helper(string s){
     
      stack<char>st;
          for(int i=0;i<s.size();i++){
              if(st.empty()){
                  st.push(s[i]);
                  
              }
              else{

                  if(s[i] == '#'){
                      st.pop();

                  }
                  else{
                      st.push(s[i]);
                  }    
               
              }
          }

          string ans="";
          while(!st.empty()){
              if(st.top()!='#')
              ans+=st.top() ;
              
              st.pop();
          }
          return ans;
    
}
   bool backspaceCompare(string s, string t) {
          
         s = helper(s);
         t = helper(t);
         return s == t;
          
    }
};