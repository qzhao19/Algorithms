class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //check exception
        if (nums.empty()){
            return 0;
        }
        
        // define target index
        int target_idx = 0;
        
        for (int i = 1; i < nums.size(); i++){
            
            if (nums[target_idx] != nums[i]){
                nums[++target_idx] = nums[i];
            }
        }
        return target_idx + 1;
    }
};