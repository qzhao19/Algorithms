class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) {
            return {};
        }

        vector<vector<string>> ans;
        unordered_map<string, vector<string>> hash_map;

        string cur_str = "";
        for (int i = 0; i < strs.size(); i++) {
            cur_str = strs[i];
            sort(cur_str.begin(), cur_str.end());
            hash_map[cur_str].push_back(strs[i]);
        }

        for (auto &val : hash_map) {
            ans.push_back(val.second);
        }

        return ans;
    }
};