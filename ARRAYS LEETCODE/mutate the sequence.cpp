#include<iostream>
using namespace std;
#include<vector>;

 vector<int> shuffle(vector<int>& nums, int n) {
       int j = n;
       vector<int>ans;
       int i =0;
       int size = nums.size();
      
       while(i!=size){
       	cout<<nums[nums[i]];
       	i++;
       	//j++;
       	//1,4,2,3,3,2,4,1
//           ans.push_back(nums[i]);
//           ans.push_back(nums[j]);
//           i++;
//           j++;
       }
        
    }
    
    int main(){
    	 vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(3);
     nums.push_back(2);
      nums.push_back(1);
    //nums.push_back();
    shuffle(nums,4);
    
     for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
  
    
    
    	
	}