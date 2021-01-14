class Solution {
private:
    vector<int> path;
    vector<vector<int>> result;

public:

    void backtrack(vector<int> &candidates, int target, int start) {
        if (target == 0) {
            result.push_back(path);
            return ;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (target - candidates[i] < 0) {
                continue;
            }

            if (i > start && candidates[i] == candidates[i-1]) {
                continue;
            }

            path.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if (candidates.size() == 0) {
            return {};
        }

        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0);

        return result;
    }
};