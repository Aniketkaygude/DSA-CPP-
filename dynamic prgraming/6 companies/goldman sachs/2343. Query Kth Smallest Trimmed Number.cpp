#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

 vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        for(auto x:queries)
        {
            priority_queue<pair<string,int>> v;
            for(int i=0;i<nums.size();i++)
            {
                int t=nums[i].length()-x[1];
                string p=nums[i].substr(t,x[1]);
                if(v.size()<x[0])
                    v.push({p,i});
                else
                {
                    if(v.top().first > p)
                    {
                        v.pop();
                        v.push({p,i});
                    }
                }
            }
            int val=v.top().second;
            res.push_back(val);
        }
        for(auto i : res){
        	cout<<i;
		}
    }

int main(){
 vector<string> nums = {"102", "473", "251", "814"};
    vector<vector<int>> queries = {{1, 1}, {2, 3}, {4, 2}, {1, 2}};
smallestTrimmedNumbers(nums,queries);

	return 0 ;
}
