class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         
        string ans=strs[0];

        for(int i=1;i<strs.size();i++){
          
          string str1=ans;
          string str2 = strs[i];
          int k=0;
          int j=0;
          string res="";
          while(k<str1.size() && j<str2.size() && str1[k] == str2[j]){
            res.push_back(str1[j]);
            k++;
            j++;
          }

          ans=res;
        } 
        return ans;
  
   }
};