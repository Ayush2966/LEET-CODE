class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int n = nums.size();        
       int count = 1;
       sort(nums.begin(), nums.end());
       
       for(int i = n - 1; i > 0; i--) {
           if(nums[i - 1] != nums[i]) {
               count++;
           }
           if(count == 3) {
               return nums[i - 1];
           }
       }
       
       return nums[n - 1];
    }
};
