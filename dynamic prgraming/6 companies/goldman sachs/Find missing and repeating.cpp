#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

 vector<int> findTwoElement(vector<int> arr, int n) {
    unordered_map<int, int> m;
    vector<int> ans(2);

    for (int i = 0; i < arr.size(); i++) {
        m[arr[i]]++;

        if (m[arr[i]] == 2) {
            ans[0] = arr[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (m.find(i) == m.end()) {
            ans[1] = i;
            break;
        }
    }
     
    cout<<"mising--> "<<ans[1]<<endl;
    cout<<"repeating--> "<<ans[0]<<endl;
    
}

int main(){

vector<int>nums={1,2,3,4,4,6};
findTwoElement(nums,nums.size());

	return 0 ;
}
