class Solution {
public:
    string longestCommonPrefix(string &s1, string &s2) {

        if (s1.size() == 0 ||s2.size() == 0) {
            return "";
        }

        int min_length = min(s1.size(), s2.size());
        int idx = 0;
        while (idx <= min_length && s1[idx] == s2[idx]) {
            idx++;
        }

        return s1.substr(0, idx);
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }

        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            ans = longestCommonPrefix(ans, strs[i]);
        }

        return ans;

    }
};