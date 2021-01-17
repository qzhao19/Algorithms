class Solution {
private:
    vector<vector<int>> result;
    vector<bool> status;
    vector<int> path;

public:
    void backtrack(vector<int> &nums, int start) {
        if (nums.size() == start) {
            result.push_back(path);
            return ;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (status[i] == true) {
                continue;
            }

            if (i > 0 && nums[i] == nums[i - 1] && status[i - 1] == false) {
                continue;
            }

            path.push_back(nums[i]);
            status[i] = true;
            backtrack(nums, start + 1);
            path.pop_back();
            status[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        int n = nums.size();

        status.resize(n, false);

        sort(nums.begin(), nums.end());

        backtrack(nums, 0);

        return result;
    }
};