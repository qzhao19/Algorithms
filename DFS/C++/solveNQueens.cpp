class Solution {
private:
    vector<vector<string>> result;

public:
    
    bool isValid(vector<string> &board, int row, int col) {
        int n = board.size();

        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void backtrack(vector<string> &board, int row) {
        if (board.size() == row) {
            result.push_back(board);
            return ;
        }

        for (int col = 0; col < board.size(); col++) {
            if (isValid(board, row, col) == false) {
                continue;
            }

            board[row][col] = 'Q';
            backtrack(board, row + 1);
            board[row][col] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));

        backtrack(board, 0);

        return result;
    }
};