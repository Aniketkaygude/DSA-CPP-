#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

 int helper(vector<vector<int>>& m, vector<vector<int>>& memo, int row, int col, int prev) {
        if (row < 0 || row >= m.size() || col < 0 || col >= m[0].size() || m[row][col] <= prev) {
            return 0;
        }
        
        if (memo[row][col] != 0) {
            return memo[row][col];
        }
        
        int left = 1+helper(m, memo, row, col - 1, m[row][col]);
        int right = 1+helper(m, memo, row, col + 1, m[row][col]);
        int up = 1+helper(m, memo, row - 1, col, m[row][col]);
        int down =1+ helper(m, memo, row + 1, col, m[row][col]);
        
        memo[row][col] =  max({left, right, up, down});
        return memo[row][col];
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> memo(m, vector<int>(n, 0));
        int maxi = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                maxi = max(maxi, helper(matrix, memo, i, j, INT_MIN));
            }
        }
        
        return maxi;
    }

int main() {
    vector<vector<int>> matrix = {{9, 9, 4},
                                   {6, 6, 8},
                                   {2, 1, 1}};
                                   
                      longestIncreasingPath(matrix);             

        return 0;
}
