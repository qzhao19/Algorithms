class Solution {
private:
    vector<string> ans;
    string str;

public:
    void backtrack(int left, int right, int n) {
        if (left == n && right == n) {
            ans.push_back(str);
            return ;
        }

        if (left < right) {
            return ;
        }

        if (left < n) {
            str.push_back('(');
            backtrack(left + 1, right, n);
            str.pop_back();
        }

        if (right < n) {
            str.push_back(')');
            backtrack(left, right + 1, n);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        
        backtrack(0, 0, n);

        return ans;
    }
};