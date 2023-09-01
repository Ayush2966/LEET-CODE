class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n); // Initialize ans with 2*n elements
        int j = 0, x = n;
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                ans[i] = nums[j];
                j++;
            } else {
                ans[i] = nums[x];
                x++;
            }
        }
        return ans;
    }
};
