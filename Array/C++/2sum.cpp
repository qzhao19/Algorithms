class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Given an array of integers, return indices of the two numbers such that they add up to a specific target.
        // You may assume that each input would have exactly one solution.
        // Example:
        //construct a hash map to store position of each element
        // O(n) complexcity
        
        unordered_map<int, int> hash_map;
        vector<int> ret;
        
        for (int i = 0; i < nums.size(); i++){
            hash_map[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            const int val = target - nums[i];
            if (hash_map.find(val) != hash_map.end() && hash_map[val] > i){
                ret.push_back(i);
                ret.push_back(hash_map[val]);
                break;
            } 
        }
        return ret;
        
    }
};