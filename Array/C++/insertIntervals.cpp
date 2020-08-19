class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;

        vector<vector<int>> ans;

        for (i = 0; i < n; i++) {
            if (intervals[i][1] < newInterval[0]) {
                ans.push_back(intervals[i]);
            } 
            else {
                break;
            }
        }

        ans.push_back(newInterval);

        for (; i < n; i++) {
            if (ans.back()[1] < intervals[i][0]) {
                ans.push_back(intervals[i]);
            } 
            else {
                ans.back()[0] = min(ans.back()[0], intervals[i][0]);
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }
};