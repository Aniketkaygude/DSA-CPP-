class Solution {
  public:
  
  void helper(vector<int>arr , vector<vector<int>>&ans , int index){
      if(index>=arr.size()){
          ans.push_back(arr);
          return;
      }
      
      for(int i=index;i<arr.size();i++){
          
          if(index!=i && arr[i] == arr[index]) continue;
          
          swap(arr[i],arr[index]);
          helper(arr,ans,index+1);
      }
  }
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        
         vector<vector<int>>ans;
          sort(arr.begin(),arr.end());
          helper(arr,ans,0);
          
           return ans;;
    }
};