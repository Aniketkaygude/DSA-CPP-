class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;

         unordered_map<string,vector<string>>m;
         
         for(string i :strs){
            string res= i;
            sort(res.begin(),res.end());
            m[res].push_back(i);
         }

         for(auto i:m){
            ans.push_back(i.second);
         }
         return ans;
    }
};