class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;

        int left = 0, max_str_length = 0;

        for (int i = 0; i < s.size(); i++){
            while (set.find(s[i]) != set.end()){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[i]);
            max_str_length = max(max_str_length, i - left + 1);
            
        }
        return max_str_length;
    }
};
