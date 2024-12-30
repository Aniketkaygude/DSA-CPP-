class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        
        vector<int>ans(nums.size(),0);
        stack<int>st;
         
        for(int i=nums.size()-1;i>=0;i--){
          
          while(!st.empty() &&nums[st.top()]<=nums[i]){
            st.pop();
          }
          if(!st.empty()){
            ans[i] = st.top()-i;
            cout<<"nj";
          }
          st.push(i);
        }
        return ans;
    }
};