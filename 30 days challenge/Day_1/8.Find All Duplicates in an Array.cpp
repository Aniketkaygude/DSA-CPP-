class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int>ans;
        unordered_map<int,int>v;
        for(int i:nums){
            v[i]++;

              if(v[i]>1){
                  ans.push_back(i);
              }
        }   
        return ans;
    }
};