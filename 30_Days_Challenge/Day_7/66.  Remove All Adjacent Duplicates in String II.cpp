class Solution {
public:
    string removeDuplicates(string s, int k) {

       stack<pair<char,int>>st;
        string ans="";
        
       for(char i:s ){
         
         if(!st.empty() && st.top().first == i && st.top().second==k-1){ 
               st.pop(); 
            }
         
         else if(!st.empty() && st.top().first==i){
            st.top().second++;
         }
         else{
            st.push({i,1});
         }
       }

       while(!st.empty()){
        int cnt=st.top().second;
        while(cnt--) ans.insert(ans.begin(),st.top().first);
       
        st.pop();
       }
       return ans;




    } 

};






