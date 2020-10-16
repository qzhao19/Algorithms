class Solution {
public:
    string longestCommonPrefix(string &s1, string &s2) {
        int index = 0, min_str_len = min(s1.size(), s2.size());

        while (index < min_str_len && s1[index] == s2[index]) {
            index++;
        }

        return s1.substr(0, index);
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }

        string result = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            result = longestCommonPrefix(result, strs[i]);
        }

        return result;
    }
};