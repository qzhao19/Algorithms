class Solution {
private:
    vector<string> ans;
    string str;

public:
    void backtrack(int open, int close, int n) {
        if (str.size() == n * 2) {
            ans.push_back(str);
            return ;
        }

        if (open < n) {
            str.push_back('(');
            backtrack(open + 1, close, n);
            str.pop_back();
        }

        if (close < open) {
            str.push_back(')');
            backtrack(open, close + 1, n);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        if (n < 0) {
            return {};
        }

        backtrack(0, 0, n);

        return ans;
    }
};