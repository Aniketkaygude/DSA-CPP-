#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& path, int index, int k) {

	
	if(index>=nums.size()){
    	for(int i:path){
        	cout<<i<<"  ";
		}	
		cout<<endl<<endl;
	}
	3	
    if (k == 0) {
        if (accumulate(path.begin(), path.end(), 0) == 0) {
            ans.push_back(path);
        }
        return;
    } 
    
    
                                                      //     -1, 0, 1, 2, -1, -4
    for (int i = index; i < nums.size(); i++) {
    	
//    	  if (i > index && nums[i] == nums[i - 1])
//            continue;
        
        path.push_back(nums[i]);
        helper(nums, ans, path, index + 1, k - 1); // Decrement k here
        path.pop_back();
    	
       
    }
}



int main() {
//    vector<int> nums = {-1, 0, 1, 2, -1, -4}; // -4 -1 -1 0 1 2
    vector<int> nums = {-1,-1,2};
    vector<vector<int>> ans;
     vector<int> path;
    sort(nums.begin(), nums.end());
    helper(nums, ans, path, 0, 3);
    
    /*
    
    for (auto& i : ans) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    */
    return 0;
}
