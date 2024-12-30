class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i =0;i<nums.size();i++){

            if(i>0 && nums[i-1] == nums[i]) continue;

            for(int j=i+1;j<nums.size();j++){

            if(j>i+1 && nums[j-1] == nums[j]) continue;         

              int k =j+1;
              int h =nums.size()-1; 

                          while(k<h){  

              long long total = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[h];
            if(total == target){
               ans.push_back(vector<int>{nums[i],nums[j],nums[k],nums[h]});
               int n1=nums[k];
               int  n2=nums[h];

               while(k<h &&nums[k]==n1 ){
                   k++;
                   
               }
               while( h>k &&  nums[h]==n2){
                   h--;
               }

            }

            else if(total<target){
                k++;
            }
            else{
                h--;
            }
                 
                   
              }

            }
            
        }  

        return ans;
         
    }
};