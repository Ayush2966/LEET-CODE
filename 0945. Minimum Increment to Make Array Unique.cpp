class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        sort(nums.begin(), nums.end());
        int numtracker=0;
        int minincre=0;
        for( auto num : nums){
            numtracker= max(num, numtracker);
            minincre+=(numtracker-num);
            numtracker= numtracker+1;
        }
        return minincre;
    }
};
