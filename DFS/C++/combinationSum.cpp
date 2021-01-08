class Solution {
private:
    vector<vector<int>> ans;
    vector<int> path;
public:
    void backtrack(vector<int> &candidates, int target, int depth) {
        if (target == 0) {
            ans.push_back(path);
            return ;
        }

        for (int i = depth; i < candidates.size(); i++) {

            if (target - candidates[i] >= 0) {
                path.push_back(candidates[i]);
                backtrack(candidates, target - candidates[i], i);
                path.pop_back();
            }
            
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        if (candidates.size() == 0) {
            return {};
        }

        backtrack(candidates, target, 0);
        return ans;
    }
};