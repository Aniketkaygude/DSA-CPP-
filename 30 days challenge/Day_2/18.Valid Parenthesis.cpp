class Solution {
public:
    bool isValid(string s) {
        
        stack<int>st;

        unordered_map<char,int>valid ={  {'(' ,1},   {'[',2}  ,{'{',3 },
                                          {')' ,-1},   {']',-2}  ,{'}',-3 }   };


               for(int i = 0 ;i<s.size() ; i++){
                  if(valid[s[i]]>0){
                      st.push(s[i]);
                  }
                  else{
                      if(st.empty()){
                          return false;
                      }
                      if(valid[st.top()] + valid[s[i]]!=0){
                          return false;
                      }
                      st.pop();
                  }

               } 

               if(st.empty()){
                   return true;
               }               
               return false;           
        
    }
};