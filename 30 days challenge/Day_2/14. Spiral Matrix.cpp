class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& array) {
        int coloumn = array[0].size();
        int row = array.size();
        vector<int> ans;
        int total = row * coloumn;
        int count = 0;

        int firstrow = 0;
        int lastrow = row - 1;
        int firstcol = 0;
        int lastcol = coloumn - 1;

        while (count < total) {
            // for first row
            for (int index = firstcol; count < total && index <= lastcol; index++) {
                ans.push_back(array[firstrow][index]);
                count++;
            }
            firstrow++;

            // for last column
            for (int index = firstrow; count < total && index <= lastrow; index++) {
                ans.push_back(array[index][lastcol]);
                count++;
            }
            lastcol--;

            // for last row
            for (int index = lastcol; count < total && index >= firstcol; index--) {
                ans.push_back(array[lastrow][index]);
                count++;
            }
            lastrow--;

            // for first column
            for (int index = lastrow; count < total && index >= firstrow; index--) {
                ans.push_back(array[index][firstcol]);
                count++;
            }
            firstcol++;
        }

        return ans;
    }
};
