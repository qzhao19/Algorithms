class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // 1. sort array
        // 2. find from left right
        // 3. jump the repeated elem
        
        // defina set to store vector
        set<vector<int>> ret_set;
        
        // check nums length
        // if (nums.size() < 3){    
            // return ret_vector;
        // }
        
        // sort array
        sort(nums.begin(), nums.end());
        
        int begin, end, mid;
        
        
        for (begin = 0; begin < nums.size() - 2; begin++){
            mid = begin + 1;
            end = nums.size() - 1;
            
            while (mid < end){
                int sum = nums[begin] + nums[mid] + nums[end];
                if (sum == 0){
                    // define a vector to store temp valus
                    vector<int> tmp(3);
                    tmp[0] = nums[begin];
                    tmp[1] = nums[mid];
                    tmp[2] = nums[end];
                    ret_set.insert(tmp);
                    mid++;
                    end--;
                } else if (sum < 0){
                    mid++;
                } else if(sum > 0){
                    end--;
                }   
            }
        }
        vector<vector<int>> ret(ret_set.begin(), ret_set.end());
        return ret;        
    }
};