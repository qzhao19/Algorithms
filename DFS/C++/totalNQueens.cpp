class Solution {
private:
    int cnt = 0;
public:
    bool isValid(vector<string> &board, int row, int col) {
        int n = board.size();
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col - 1; i >=0 && j >= 0; i--, j--) {
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
            cnt++;
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

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));

        backtrack(board, 0);

        return cnt;
    }
};