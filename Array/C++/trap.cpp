class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), result = 0;

        if (n == 0) {
            return 0;
        }

        vector<int> max_left_h(n), max_right_h(n);
        max_left_h[0] = height[0];

        for (int i = 1; i < n; i++) {
            max_left_h[i] = max(height[i], max_left_h[i-1]);
        }

        max_right_h[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            max_right_h[i] = max(height[i], max_right_h[i+1]);
        }

        for (int i = 1; i < n - 1; i++) {
            result += min(max_left_h[i], max_right_h[i]) - height[i];
        }

        return result;
    }
};