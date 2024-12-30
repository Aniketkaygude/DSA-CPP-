class Solution {
public:

 int pivote (vector<int>&nums){
    int s=0;
    int e=nums.size()-1;

    while(s<e){
         int mid = s+(e-s)/2;
        if(nums[mid]>nums[mid+1]   ){
            e = mid;
        } 
        else if(nums[s]>nums[mid]) {
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
 }
int bs(vector<int>&nums, int s, int e,int target){
    
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
            }
    }
    return -1;
}

    int search(vector<int>& nums, int target) {
        
        int p = pivote(nums);
         int left = bs(nums, 0, p, target);
         cout<<p<<" ";
        if (left != -1) return left;
        int right = bs(nums, p + 1, nums.size() - 1, target);
        return right;
    }
};