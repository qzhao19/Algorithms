class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        // sort
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            if (nums[i] == nums[j]){
                return nums[i];
            }
        }
        return -1;
    }
};
