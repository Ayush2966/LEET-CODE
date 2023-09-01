class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2* nums.size());
        int n = nums.size();
        for(int i= 0; i<nums.size(); i++){
            ans[i] = nums[i];
            ans[n+i]=nums[i];
        }
        return ans;
    }
};
