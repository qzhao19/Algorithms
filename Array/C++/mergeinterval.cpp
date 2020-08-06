class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // checkout if intervals is empty
        if (intervals.empty()){
            return {};
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans{intervals[0]};
        
        //cout << ans << endl;
        for (int i = 1; i < intervals.size(); i++){
            
            if (intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
                
            }
        }
        return ans;
            
    }
};