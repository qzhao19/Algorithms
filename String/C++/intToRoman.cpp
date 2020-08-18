class Solution {
public:
    string intToRoman(int num) {
        vector<int> vals = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> strs = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string ans;

        for (int i = 0; i < 13; i++) {
            while (num >= vals[i]) {
                num -= vals[i];
                ans += strs[i];
            }
        }

        return ans;
    }
};