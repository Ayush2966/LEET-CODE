class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());            
        int sum=0;
        for(int i=nums[nums.size()-1]; i<nums[nums.size()-1] + k; i++){
            sum+=i;
        }
        return sum;
    }
};
