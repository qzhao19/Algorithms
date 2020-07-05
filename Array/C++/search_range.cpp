class Solution {
public:
    int binarySearch1(vector<int> &array, int target){
        int left = 0;
        int right = array.size() - 1;
        int mid, ans = array.size();
        
        while (left <= right){
            
            mid = (left + right) >> 1;
            
            if (array[mid] >= target){
                ans = min(ans, mid);
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
    
    int binarySearch2(vector<int> &array, int target){
        int left = 0;
        int right = array.size() - 1;
        int mid, ans = -1;
        
        while (left <= right){
            mid = (left + right) >> 1;
            if (array[mid] <= target){
                ans = max(mid, ans);
                left = mid + 1;
            }else{
                right = mid - 1;
            }
            
        }
        return ans;
    }
        
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch1(nums, target);
        int right = binarySearch2(nums, target);
        
        if (left <= right){
            return vector<int> ({left, right});
        }else{
            return vector<int> ({-1, -1});
        }
        
    }
};