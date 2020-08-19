class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n_rows = matrix.size(), n_cols = matrix[0].size();

        set<int> rows, cols;

        for (int i = 0; i < n_rows; i++) {
            for (int j = 0; j < n_cols; j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for (auto row : rows) {
            for (int j = 0; j < n_cols; j++) {
                matrix[row][j] = 0;
            }
        }

        for (int i = 0; i < n_rows; i++) {
            for (auto col : cols) {
                matrix[i][col] = 0;
            }
        }
    }
};