#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int countDistinct(vector<int>& nums, int k, int p) {
        
        int n=nums.size();
        set<vector<int>>ans;
        
        int i,j;
        for(i=0;i<n;i++)
        {
            vector<int>tt;
            int ct=0;
            for(j=i;j<n;j++)
            {
                tt.push_back(nums[j]);
                if(nums[j]%p==0)
                    ++ct;
                if(ct>k)
                    break;
                ans.insert(tt);
                    
            }
        }
        cout<< ans.size();
    }


int main(){

vector<int>nums = {2,3,3,2,2};
int k = 2;
int p = 2;
countDistinct(nums,k,p);

	return 0 ;
}
