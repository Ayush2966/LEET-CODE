class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, esum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int temp = nums[i];
            while (temp) {
                esum += temp % 10;
                temp /= 10;
            }
        }
        return abs(esum - sum);
    }
};
