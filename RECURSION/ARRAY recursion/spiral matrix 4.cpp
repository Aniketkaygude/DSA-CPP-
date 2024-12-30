#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {

    vector<int> nums = {3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0};
    int row = 3;
    int col = 5;
    vector<vector<int>> ans(row, vector<int>(col, -1));

    int firstrow = 0;
    int firstcol = 0;
    int lastrow = row - 1;
    int lastcol = col - 1;

    int index = 0;
    int total = row * col;

    while (index < total) {

        // left to right
        for (int i = firstcol; index < total && i <= lastcol; i++) {
            ans[firstrow][i] = nums[index++];
        }
        firstrow++;

        // top to bottom;
        for (int i = firstrow; index < total && i <= lastrow; i++) {
            ans[i][lastcol] = nums[index++];
        }
        lastcol--;

        // right to left
        for (int i = lastcol; index < total && i >= firstcol; i--) {
            ans[lastrow][i] = nums[index++];
        }
        lastrow--;

        // bottom to top
        for (int i = lastrow; index < total && i >= firstrow; i--) {
            ans[i][firstcol] = nums[index++];
        }
        firstcol++;
    }

    cout << endl << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
