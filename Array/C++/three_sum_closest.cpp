/*
int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0, min_diff = 1e5;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int j = 0, k = nums.size() - 1;
            while(j < i && k >i){
                auto sum = nums[i] + nums[j] + nums[k];
                auto diff = abs(sum - target);
                if(diff < min_diff) {
                    min_diff = diff; ans = sum;
                }
                if(sum == target) return target;
                if (sum > target) k--;
                else j++;
            }
        }
        return ans;
    }
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        // same idea with threeSum problem
        
        // 1. do sort for array
        sort(nums.begin(), nums.end());
        
        // define begin, mid, end and INT_MAX
        // int i, j, k;
        int len = nums.size();
        int best = INT_MAX;
        int ret_val = 0;
        for (int i = 0; i < len - 2; i++){
            // define begin, mid, end
            int j = i + 1;
            int k = len - 1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    return sum;
                }else if (sum < target){
                   if(target - sum < best){
                       best = target - sum;
                       ret_val = sum;
                   } 
                    j++;
                }else if (sum > target){
                    if (sum - target < best){
                        best = sum - target;
                        ret_val = sum;
                    }
                    k--;
                }
            }   
        }
        return ret_val;     
    }
};