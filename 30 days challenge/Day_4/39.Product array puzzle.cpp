class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        
        vector<long long int>left(n);
        vector<long long int>right(n);
        
        
        left[0] = 1;
        right[n-1] = 1;
        
        // Compute left products
        for (int i = 1; i < n; i++) {
            left[i] = left[i-1] * nums[i-1];
        }
        
        // Compute right products
        for (int j = n-2; j >= 0; j--) {
            right[j] = right[j+1] * nums[j+1];
        }
        
        // Compute the final product except self
        vector<long long int> ans(n);
        for (int k = 0; k < n; k++) {
            ans[k] = left[k] * right[k];
        }
        
        
        return ans;
    
        
    }
};