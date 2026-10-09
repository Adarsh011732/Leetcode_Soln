class Solution {
    void markrow(vector<vector<int>>& matrix, int r) {
        int m = matrix[0].size();

        for (int j = 0; j < m; j++) {
            if (matrix[r][j] != 0)
                matrix[r][j] = -999999;  //test  case issue
        }
    }

    void markcol(vector<vector<int>>& matrix, int c) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            if (matrix[i][c] != 0)
                matrix[i][c] = -999999;
        }
    }

public:
    void setZeroes(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    markrow(matrix, i);
                    markcol(matrix, j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == -999999)
                    matrix[i][j] = 0;
            }
        }
    }
};