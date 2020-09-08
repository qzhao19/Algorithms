class Solution {
public:
    int factorial(int n) {
        int ans = 1;

        while (n) {
            ans *= n--;
        }
        return ans;
    }

    string getPermutation(int n, int k) {
        string ans;
        vector<int> nums;

        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
        }

        while (nums.size() > 0) {
            int index = nums.size();
            int fact = factorial(index - 1);

            index = (k - 1) / fact;
            ans += to_string(nums[index]);

            k = k - fact * index;
            nums.erase(nums.begin() + index);
        }

        return ans;
    }
};