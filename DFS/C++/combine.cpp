class Solution {
private:
    vector<vector<int>> ans;
    vector<int> path;
public:
    void backtrack(int n, int k, int start) {
        if (path.size() == k) {
            ans.push_back(path);
            return ;
        }

        for (int i = start; i <= n; i++) {
            path.push_back(i);
            backtrack(n, k, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        if (k > n) {
            return {};
        }

        backtrack(n, k, 1);

        return ans;
    }
};