class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> hash_set;
        int n = nums.size();
        if (n <= 2) {
            return {};
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    vector<int> tmp(3);
                    tmp[0] = nums[i];
                    tmp[1] = nums[left];
                    tmp[2] = nums[right];
                    hash_set.insert(tmp);
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        vector<vector<int>> result = {hash_set.begin(), hash_set.end()};

        return result;
    }
};