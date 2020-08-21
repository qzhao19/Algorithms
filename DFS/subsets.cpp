class Solution {
private:
    vector<vector<int>> ans;
    vector<int> path;
public:

    void backtrack(vector<int> &nums, int start) {

        ans.push_back(path);
        for (int i = start; i < nums.size(); i++) {
            path.push_back(nums[i]);
            backtrack(nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0);

        return ans;
    }
};