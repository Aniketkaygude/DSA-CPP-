#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) 
{
    // name --> access times
    unordered_map<string, vector<int>> mp;

    for (auto& it : access_times) {
        int time = stoi(it[1]); // convert to int
        mp[it[0]].push_back(time); // store in map
    }

    // sort each employee access times
    for (auto& it : mp) {
        sort(it.second.begin(), it.second.end());
    }

    // scan sorted access times to check if accessed >=3 times to store required employees
    vector<string> ans; // to store required employees
    for (auto& it : mp) {
        vector<int>& time = it.second;
        for (int i = 2; i < time.size(); i++) {
            if (time[i] - time[i - 2] < 100) {
                // store employee in ans and move to another employee
                ans.push_back(it.first);
                break;
            }
        }
    }

    return ans;
}

int main() {
    vector<vector<string>> access_times = {{"a", "0549"}, {"b", "0457"}, {"a", "0532"}, {"a", "0621"}, {"b", "0540"}};

    vector<string> result = findHighAccessEmployees(access_times);

    cout << "Employees with high access frequency: ";
    for (const string& employee : result) {
        cout << employee << " ";
    }
    cout << endl;

    return 0;
}
