class Solution {
private:
    vector<int> candidates = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> ans;
    vector<int> path;

public:

    void backtrack(int k, int target, int start) {
        if (target == 0 && k == 0) {
            ans.push_back(path);
            return ;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (target - candidates[i] < 0) {
                continue;
            }
            path.push_back(candidates[i]);
            backtrack(k - 1, target - candidates[i], i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int target) {
        backtrack(k, target, 0);

        return ans;
    }
};