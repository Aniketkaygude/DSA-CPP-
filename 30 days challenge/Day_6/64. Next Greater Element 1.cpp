class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>st;
        st.push(-1);
          int i=nums2.size()-1;
       while(i>=0){

          while(!st.empty() && st.top()!=-1 && st.top()<nums2[i] ){
               st.pop();
          }
          m[nums2[i]]=st.top();
          st.push(nums2[i]);
          i--;
        }

          vector<int>ans;
        for(int i:nums1){
         ans.push_back(m[i]);
        }
        return ans;

    }
};