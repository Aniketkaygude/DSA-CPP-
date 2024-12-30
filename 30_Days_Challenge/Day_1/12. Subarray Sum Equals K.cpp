class Solution {
public:

    int subarraySum(vector<int>& nums, int k) {
        
         int prefix=0;
         int cnt=0;
         unordered_map<int,int>m;
        m[0]=1;
         for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int remove = prefix-k;
            cnt+=m[remove];
            m[prefix]++;
         }
         return cnt;
        
    }
};