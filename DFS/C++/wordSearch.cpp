class Solution {
private:
    bool is_visited = false;
public:

    bool dfs(vector<vector<char>> &board, string &word, int cur_idx, int x, int y) {
        if (word.size() == cur_idx) {
            is_visited = true;
            return true;
        }

        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != word[cur_idx]) {
            return false;
        }

        bool is_visited_top, is_visited_bottom, is_visited_left, is_visited_right;

        if (is_visited == false) {
            char tmp = board[x][y];
            board[x][y] = '.';

            is_visited_top = dfs(board, word, cur_idx + 1, x - 1, y);
            is_visited_bottom = dfs(board, word, cur_idx + 1, x + 1, y);
            is_visited_left = dfs(board, word, cur_idx + 1, x, y - 1);
            is_visited_right = dfs(board, word, cur_idx + 1, x, y + 1);
            board[x][y] = tmp;

            return is_visited_top || is_visited_bottom || is_visited_left || is_visited_right;
        }

        return true;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (word.size() == 0 || board.size() == 0 || board[0].size() == 0) {
            return false;
        }

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(board, word, 0, i, j)) {
                    return true;
                }
            }
        }

        return false;

    }
};