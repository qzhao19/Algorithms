class Solution {
private:
    vector<vector<int>> ans;
    vector<bool> status;
    vector<int> path;
    

public:
    void dfs(vector<int> &nums, int depth) {
        // 当前递归层数 == 数组的长度
        if (nums.size() == depth) {
            ans.push_back(path);
            return ;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (status[i]) {
                continue;
            }
            path.push_back(nums[i]);
            status[i] = true;
            dfs(nums, depth + 1);
            path.pop_back();
            status[i] = false;
        }

        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();

        status.resize(n, false);
        dfs(nums, 0);

        return ans;
    }
};