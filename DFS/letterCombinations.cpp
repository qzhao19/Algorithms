class Solution {
private:
    unordered_map<char, string> hash_map{{'2', "abd"}, {'3', "def"}, 
                                         {'4', "ghi"}, {'5', "jkl"}, 
                                         {'6', "mno"}, {'7', "pqrs"}, 
                                         {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> ans;
    string str;
public:
    void dfs(string digits, int depth) {
        if (digits.size() == depth) {
            ans.push_back(str);
            return ;
        }

        for (int i = 0; i < hash_map[digits[depth]].size(); i++) {
            str += hash_map[digits[depth]][i];
            dfs(digits, depth + 1);
            str.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return {};
        }

        dfs(digits, 0);

        return ans;
    }
};