class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
 
            sort(nums.begin(),nums.end());

            vector<vector<int>>ans;

         for(int i=0;i<nums.size();i++){

             if(i>0 && nums[i] == nums[i-1]){
                 continue;
             }

          int j=i+1;
           int k=nums.size()-1;

            while(j<k){  

            int total=nums[i]+nums[j]+nums[k];

            if(total == 0){
               ans.push_back(vector<int>{nums[i],nums[j],nums[k]});
               int n1=nums[j];
               int  n2=nums[k];

               while(j<k &&nums[j]==n1 ){
                   j++;
                   
               }
               while( k>j &&  nums[k]==n2){
                   k--;
               }

            }

            else if(total<0){
                j++;
            }
            else{
                k--;
            }    

            }

         }   
  
      return ans;
    }
};