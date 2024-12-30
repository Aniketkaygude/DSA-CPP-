class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
               int ROW = matrix.size();
    int COL = matrix[0].size();
    cout<<COL;

    vector<vector<int>> matrix2(ROW, vector<int>(COL));  // Resize matrix2 to match dimensions of matrix

    int firstrow = 0;
    int firstcol = 0;
    int lastrow = matrix.size() - 1;
    int lastcol = matrix[0].size() - 1;
    int size = ROW * COL;
    int i = 0;
    int j = 0;
    int total = 0;
    
    while(total<size){
      
      for(int index = lastrow ;index>=firstrow;index--){
        matrix2[i][j]=matrix[index][firstcol];
        j++;
        total++;
      }
      i++;
      j=0;
      firstcol++;

    }
   


    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            matrix[i][j] = matrix2[i][j];
        }
    }
    }
};